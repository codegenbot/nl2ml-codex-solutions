def dice_game(n, m):
    if n < m:
        return 0.0
    elif m == 1:
        return 1.0
    else:
        return (n - m) / (n)