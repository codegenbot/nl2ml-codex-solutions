def roll_dice(n, m):
    return sum(1 for i in range(1, n+1) for j in range(1, m+1) if j > i) / (n * m)