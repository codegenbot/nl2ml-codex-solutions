"""
def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(m) for j in range(i+1, n+1))
    return peter_win_count / float(total_outcomes)
"""