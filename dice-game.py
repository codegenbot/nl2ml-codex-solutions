```
def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(min(i, j) == i for i in range(1, n+1) for j in range(1, m+1)) * (n - 1)
    return peters_win / total_outcomes