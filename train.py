import numpy as np
import pickle
import torch
from torch.utils.data import Dataset, DataLoader, SubsetRandomSampler
from Model import Net
from data import get_dataloader
import wandb
from torch.nn import CrossEntropyLoss
from torch import optim
#9d68c03f0769f016e7ddc0500ccc75c0edc2e047
wandb.init(project="nogo")


class TrainPipline:
    def __init__(self, args):

        self.all_data_dir = args["data"]
        self.device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
        print(f"Using device: {self.device}")
        self.model = args["model"].to(self.device)
        self.criterion = args["criterion"]
        self.optimizer = args["optimizer"]
        self.save_path = args["save_path"]
        self.batch_size = args["batch_size"]
        self.shuffle = args["shuffle"]
        self.epochs = args["epochs"]

    def train(self):
        self.model.train()

        for data_dir in self.all_data_dir:
            train_dataloader = get_dataloader(
                data_dir["train"],
                self.batch_size,
                self.shuffle,
            )
            val_dataloader = get_dataloader(
                data_dir["val"],  # or a separate validation data directory
                self.batch_size,
                shuffle=False,
            )

            for i in range(self.epochs):
                total_loss = 0
                self.model.train()  # Set the model to training mode
                for idx, (data_x, data_y) in enumerate(train_dataloader, 0):

                    self.optimizer.zero_grad()

                    data_x = data_x.to(self.device)
                    data_y = data_y.to(self.device)

                    outputs = self.model(data_x)
                    loss = self.criterion(outputs, data_y)

                    loss.backward()
                    self.optimizer.step()

                    predict = torch.argmax(outputs, dim=-1)
                    acc = (predict == data_y).sum() / len(predict)
                    print(
                        f"Epoch [{i+1}/{self.epochs}], Batch [{idx+1}], loss: {loss.item()}, acc: {acc.item()}"
                    )
                    wandb.log({"batch_loss": loss.item()})
                    wandb.log({"accuracy": acc.item()})

                # 每个 epoch 之后清理缓存
                torch.cuda.empty_cache()

                # Save the model after each epoch
                torch.save(self.model.state_dict(), self.save_path + f"{i+1}.pth")

                # Evaluate the model on the validation set
                self.model.eval()  # Set the model to evaluation mode
                val_loss = 0
                correct = 0
                total = 0

                with torch.no_grad():  # No need to track gradients during evaluation
                    for data_x, data_y in val_dataloader:
                        data_x = data_x.to(self.device)
                        data_y = data_y.to(self.device)

                        outputs = self.model(data_x)
                        loss = self.criterion(outputs, data_y)
                        val_loss += loss.item()

                        predict = torch.argmax(outputs, dim=-1)
                        correct += (predict == data_y).sum().item()
                        total += data_y.size(0)

                avg_val_loss = val_loss / len(val_dataloader)
                val_accuracy = correct / total
                print(
                    f"Epoch [{i+1}/{self.epochs}], Validation loss: {avg_val_loss}, Validation accuracy: {val_accuracy}"
                )
                wandb.log({"val_loss": avg_val_loss, "val_accuracy": val_accuracy})


if __name__ == "__main__":
    model = Net(9, 9)
    model.load_state_dict(
        torch.load("./model.pth", map_location=torch.device("cpu")),
    )
    args = {
        "data": [{"train": "./data/", "val": "./val/"}],
        "device": "cuda",
        "model": model,
        "criterion": CrossEntropyLoss(),
        "optimizer": optim.Adam(model.parameters(), lr=0.001),
        "save_path": "model/model_",
        "batch_size": 4096,
        "shuffle": True,
        "epochs": 30,
    }

    pip = TrainPipline(args)

    pip.train()