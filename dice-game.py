```
import math
def dice_game(n, m):
    total_combinations = n * m
    count = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                count += 1
    return count / total_combinations