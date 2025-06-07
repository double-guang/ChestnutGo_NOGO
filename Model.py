# -*- coding: utf-8 -*-
"""
An implementation of the policyValueNet in PyTorch
Tested in PyTorch 0.2.0 and 0.3.0

"""
from copy import deepcopy
import torch
import torch.nn as nn
import torch.optim as optim
import torch.nn.functional as F
from torch.autograd import Variable
import numpy as np
import random


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
    """policy-value network module"""

    def __init__(self, board_width, board_height):
        super(Net, self).__init__()

        self.board_width = board_width
        self.board_height = board_height
        # common layers
        self.conv1 = Residual(4, 32, use_1x1conv=True)
        self.conv2 = Residual(32, 64, use_1x1conv=True)
        self.conv3 = Residual(64, 128, use_1x1conv=True)
        # action policy layers
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

    # def train_step(self, state_batch: torch.Tensor, next_step: torch.Tensor):
    #    """
    #    args:
    #        state_batch: (B,C,H,W)
    #        next_step:(B)
    #    """
    #    pass
