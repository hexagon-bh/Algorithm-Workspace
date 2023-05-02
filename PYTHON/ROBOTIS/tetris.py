import pygame
import random

# 게임 윈도우 크기 설정
WINDOW_WIDTH = 800
WINDOW_HEIGHT = 600

# 게임 보드 설정
CELL_SIZE = 30
ROWS = 20
COLS = 10
board = [[0 for x in range(COLS)] for y in range(ROWS)]

# 블록 설정
BLOCK_SIZE = 30
shapes = [
    [[1, 1, 1, 1]],  # I block
    [[1, 1, 0], [0, 1, 1]],  # Z block
    [[0, 1, 1], [1, 1, 0]],  # S block
    [[1, 1, 1], [0, 0, 1]],  # J block
    [[1, 1, 1], [1, 0, 0]],  # L block
    [[1, 1], [1, 1]],  # O block
    [[0, 1, 0], [1, 1, 1]]  # T block
]

colors = [
    (0, 0, 0),
    (255, 0, 0),
    (0, 255, 0),
    (0, 0, 255),
    (255, 255, 0),
    (255, 0, 255),
    (0, 255, 255),
    (255, 255, 255)
]

# 블록 클래스 생성
class Block:
    def __init__(self, x, y, shape):
        self.x = x
        self.y = y
        self.shape = shape
        self.color = random.randint(1, 7)
        
    def move(self, direction):
        if direction == "left":
            self.x -= 1
        elif direction == "right":
            self.x += 1
        elif direction == "down":
            self.y += 1
        
    def rotate(self):
        self.shape = rotate_block(self.shape)
        
    def draw(self):
        for row in range(len(self.shape)):
            for col in range(len(self.shape[0])):
                if self.shape[row][col] == 1:
                    pygame.draw.rect(screen, colors[self.color], ((self.x + col) * CELL_SIZE, (self.y + row) * CELL_SIZE, CELL_SIZE, CELL_SIZE))
                    
    def can_move(self, direction):
        if direction == "left":
            for row in range(len(self.shape)):
                for col in range(len(self.shape[0])):
                    if self.shape[row][col] == 1:
                        if self.x + col - 1 < 0 or board[self.y + row][self.x + col - 1] != 0:
                            return False
        elif direction == "right":
            for row in range(len(self.shape)):
                for col in range(len(self.shape[0])):
                    if self.shape[row][col] == 1:
                        if self.x + col + 1 >= COLS or board[self.y + row][self.x + col + 1] != 0:
                            return False
        elif direction == "down":
            for row in range(len(self.shape)):
                for col in range(len(self.shape[0])):
                    if self.shape[row][col] == 1:
                        if self.y + row + 1 >= ROW