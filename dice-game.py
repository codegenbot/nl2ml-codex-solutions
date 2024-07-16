def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(1, min(n+1, m+1)) for j in range(1, max(m+1, n+1)) if i > j)
    same_rolls_count = (min(n,m) - 1)
    return peter_win_count / total_outcomes