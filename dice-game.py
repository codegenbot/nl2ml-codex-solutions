def dice_game(n, m):
    return sum(1 for _ in range(m - 1) if n > i + 1) / (n * m)