```
def roll_higher(n, m):
    import random
    total_combinations = n * m
    higher_rolls = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                higher_rolls += 1
            elif i == j:
                higher_rolls += 1 if random.random() < (n-i)/(m-j) else 0
    return higher_rolls / total_combinations