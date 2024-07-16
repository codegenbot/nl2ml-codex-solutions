def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(min(n,m), n+1) for j in range(1, min(n,m)))
    same_rolls_count = (min(n,m) - 1)
    return peter_win_count / float(total_outcomes)