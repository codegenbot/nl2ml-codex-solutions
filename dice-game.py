def dice_game(n, m):
    return (1 / n + 1 / m) * sum(range(min(n-1,m), n+m))