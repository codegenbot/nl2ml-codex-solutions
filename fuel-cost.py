```
def fuel_cost(vector):
    return sum((i // 1) - (i % 3) // 3 - 2 for i in vector)