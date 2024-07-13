def dice_game(n, m):
    if n <= m:
        return 0
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m+1, n) for _ in range(m))
    colin_wins = sum(1 for k in range(1, min(i, m)) for i in range(m+1, n))
    return (peters_win + colin_wins) / total_outcomes