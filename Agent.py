import numpy as np
import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
from torch.autograd import Variable
import numpy as np
import json
import sys
import gc
import os

Col=1
board=np.zeros([9,9],dtype=int)

def set_learning_rate(optimizer, lr):
    """Sets the learning rate to the given value"""
    for param_group in optimizer.param_groups:
        param_group["lr"] = lr


class Residual(nn.Module):  # @save
    def __init__(self, input_channels, num_channels, use_1x1conv=False, strides=1):
        super().__init__()
        self.conv1 = nn.Conv2d(
            input_channels, num_channels, kernel_size=3, padding=1, stride=strides
        )
        self.conv2 = nn.Conv2d(num_channels, num_channels, kernel_size=3, padding=1)

        if use_1x1conv:
            self.conv3 = nn.Conv2d(
                input_channels, num_channels, kernel_size=1, stride=strides
            )
        else:
            self.conv3 = None
        self.bn1 = nn.BatchNorm2d(num_channels)
        self.bn2 = nn.BatchNorm2d(num_channels)


    def forward(self, X):
        Y = F.relu(self.bn1(self.conv1(X)))
        Y = self.bn2(self.conv2(Y))
        if self.conv3:
            X = self.conv3(X)
        Y += X
        return F.relu(Y)


class Net(nn.Module):

    def __init__(self, board_width, board_height):
        super(Net, self).__init__()

        self.board_width = board_width
        self.board_height = board_height

        self.conv1 = Residual(4, 32, use_1x1conv=True)
        self.conv2 = Residual(32, 64, use_1x1conv=True)
        self.conv3 = Residual(64, 128, use_1x1conv=True)

        self.act_conv1 = Residual(128, 4, use_1x1conv=True)
        self.act_fc1 = nn.Linear(
            4 * board_width * board_height, board_width * board_height
        )


    def forward(self, state_input):
        x = self.conv1(state_input)
        x = self.conv2(x)
        x = self.conv3(x)
        x_act = self.act_conv1(x)
        x_act = x_act.view(-1, 4 * self.board_width * self.board_height)
        x_act = F.log_softmax(self.act_fc1(x_act))
        return x_act


def get_board_state(game_history: list):

    state = np.zeros(shape=(1, 4, 9, 9), dtype=np.float64)
    for idx, step in enumerate(game_history):
        state[0, idx % 2, step["y"], step["x"]] = 1
        state[0, 2, step["y"], step["x"]] = 1
        state[0, 3] = idx % 2
    return torch.Tensor(state)


def get_move_idx(move):

    return move["y"] * 9 + move["x"]

def dfs_air(x,y,col):
    if x<0 or x>8 or y<0 or y>8:
        return False
    if board[x][y]==-col:
        return False
    if board[x][y]==0:
        return True
    board[x][y]=-col
    flag= dfs_air(x,y-1,col) or dfs_air(x,y+1,col) or dfs_air(x-1,y,col) or dfs_air(x+1,y,col)
    board[x][y]=col
    return flag

def judge(x,y,col):
    if x<0 or x>8 or y<0 or y>8 or board[x][y]!=0:
        return False
    flag=True
    board[x][y]=col
    if not dfs_air(x,y,col):
        flag=False
    if x+1<=8 and board[x+1][y]==-col and not dfs_air(x+1,y,-col):
        flag=False
    if x-1>=0 and board[x-1][y]==-col and not dfs_air(x-1,y,-col):
        flag=False
    if y+1<=8 and board[x][y+1]==-col and not dfs_air(x,y+1,-col):
        flag=False
    if y-1>=0 and board[x][y-1]==-col and not dfs_air(x,y-1,-col):
        flag=False
    board[x][y]=0

    return flag




@torch.no_grad()
def main(Json_str):

    print("test")
    file = "./model_29.pth"
    state_dict = torch.load(file, map_location=torch.device("cpu"))
    model = Net(9, 9)
    model.load_state_dict(state_dict)
    model.eval()


    gc.collect()

    avaliables = set(range(9 * 9))

    """
    parse: input
    write here


    """
    history = []

    print(Json_str)
    print(type(Json_str))

    Color,requests, responses = map(json.loads(Json_str).get, ["Col","requests", "responses"])
    Col=int(Color)

    print("Col:", Col)
    print("requests:", requests)
    print("responses:", responses)

    if requests[0]["x"] >= 0:
        history.append({"x": requests[0]["x"], "y": requests[0]["y"]})
        board[requests[0]["x"]][requests[0]["y"]]=-Col
    for i in range(len(responses)):
        history.append({"x": responses[i]["x"], "y": responses[i]["y"]})
        board[responses[i]["x"]][responses[i]["y"]] = Col
        history.append({"x": requests[i + 1]["x"], "y": requests[i + 1]["y"]})
        board[requests[i+1]["x"]][requests[i+1]["y"]] = -Col

    for his in history:
        avaliables.remove(get_move_idx(his))

    illegel_list = []
    for i in avaliables:
        flag=judge(i%9,i//9,Col)

        if not flag:
            illegel_list.append(i)
    for i in illegel_list:
        avaliables.remove(i)

    board_state = get_board_state(history)
    action_probs = model(board_state)
    policy = action_probs.flatten()

    """
    initial available steps
    """

    for av in avaliables:
        policy[av] += 10000

    action = torch.argmax(policy)
    action = action.item()
    # print(f"x: {action % 9} y: {action // 9}")
    # print(json.dumps({"response": {"x": action % 9, "y": action // 9, "debug": ""}}))
    return (action % 9,action // 9)


if __name__ == "__main__":
    # print("test")

    Json_str=sys.argv[1]
    main(Json_str)
