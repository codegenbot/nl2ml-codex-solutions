def roll_dice(n, m):
    return (n - m) / (n + m - 1) if n > m else (m - n) / (m + n - 1)