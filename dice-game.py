def dice_game(n, m):
    return (1 / n) * sum(1/i for i in range(2, n+1)) / (n + m - 1)