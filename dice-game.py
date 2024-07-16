def dice_game(n, m):
    peter_win_count = sum(min(i, j) < i for i in range(1, n+1) for j in range(1, m+1))
    return peter_win_count / (n * m)