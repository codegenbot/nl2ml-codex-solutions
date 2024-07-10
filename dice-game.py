def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(m+1) if i < (n - 1))
    return favorable_outcomes / total_outcomes