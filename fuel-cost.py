def fuel_cost(arr):
    return sum((i // (i//3 + 1)) - 2 for i in arr)