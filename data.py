import torch
from torch.utils.data import Dataset, DataLoader
import random
import json
import numpy as np
from pathlib import Path
from tqdm import tqdm
import chardet

"""
 ->x
|  
y
"""


class DataParser:
    def __init__(self):
        self.board_size = 9

    def parse(self, games: list[dict]):
        data = []
        for g in games:
            g = self.__parse_game_log(g)
            if g:
                data.append(g)
        winner_states, actions = self.__parse_winner_data(data)
        return torch.Tensor(winner_states), torch.tensor(actions, dtype=torch.long)

    def __parse_game_log(self, game: dict):
        try:
            display = game["log"][-1]["output"]["display"]
            if "err" in display.keys():
                return None
            log = game["log"]
            moves, idx = [], 0
            for item in log:
                if len(item) == 1:
                    moves.append(item[f"{idx}"]["response"])
                    idx = 1 - idx
            assert 1 - idx == display["winner"]
            return moves, display["winner"]
        except AssertionError:
            print("assertion error")
        except:
            print("error")
        assert False

    def __parse_winner_data(self, games: list):

        winner_states, actions = [], []
        for item in games:
            state = np.zeros(
                shape=(1, 4, self.board_size, self.board_size), dtype=np.float64
            )
            steps, label = item
            for idx, step in enumerate(steps):
                if idx % 2 == label:
                    winner_states.append(state.copy())
                    actions.append(step["y"] * self.board_size + step["x"])
                state[0, idx % 2, step["y"], step["x"]] = 1
                state[0, 2, step["y"], step["x"]] = 1
                state[0, 3] = idx % 2

        return np.concatenate(winner_states, axis=0), np.array(actions)


def get_encoding(file):
    with open(file,'rb') as f:
        tmp = chardet.detect(f.read())
        return tmp['encoding']

class GameDataset(Dataset):
    def __init__(
        self,
        data_dir: str,
        parser: DataParser = DataParser(),
    ):
        games = []
        path = list(Path(data_dir).glob("*"))
        for data_path in tqdm(path):
            with open(data_path, "r", encoding="utf-8") as f:
                for line in f:
                    item = json.loads(line)
                    games.append(item)
        winner_states, actions = parser.parse(games)
        self.winner_states = winner_states
        self.actions = actions
        assert len(self.winner_states) == len(actions)

    def __len__(self):
        return len(self.winner_states)

    def __getitem__(self, idx):
        sample = self.winner_states[idx]
        label = self.actions[idx]
        return sample, label


def get_dataloader(data_dir: str, batch_size, shuffle=True):
    dataset = GameDataset(data_dir)
    dataloader = DataLoader(dataset, batch_size=batch_size, shuffle=shuffle)
    return dataloader


if __name__ == "__main__":
    path = "./data/"
    train_loader = get_dataloader(path, batch_size=2048, shuffle=True)
    for inputs, targets in train_loader:
        print(inputs.size(), targets.size())
        break
