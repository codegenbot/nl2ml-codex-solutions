def dice_game(n, m):
    return sum(1/m for _ in range(m)) / (n * m)