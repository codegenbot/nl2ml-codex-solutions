```
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    for i in range(1, n):
        for j in range(1, min(i, m) + 1):
            if i > j:
                favorable_outcomes += 1
    print(f"The probability that Peter rolls strictly higher than Colin is: {favorable_outcomes / total_outcomes}")
    return favorable_outcomes / total_outcomes