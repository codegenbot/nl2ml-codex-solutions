def dice_game(n, m):
    return sum(1/i for i in range(1, min(n,m))) / (n*m)