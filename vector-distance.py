import numpy as np

n = int(input())

vector1 = np.array(input().split(), dtype=float)
vector2 = np.array(input().split(), dtype=float)

distance = np.linalg.norm(vector1 - vector2)
print(distance)