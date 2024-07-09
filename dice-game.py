```Python
def roll_dice(n, m):
    p_total = sum(1 for _ in range(1, n + 1))
    c_total = sum(1 for _ in range(1, m + 1))

    probability = sum((i + 1) / (n * p_total) for i in range(m)) 
    return probability