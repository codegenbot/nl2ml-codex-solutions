def fuel_cost(vector):
    return sum((i // 3 - 2) for i in vector)

print(fuel_cost(input("Enter space-separated positive integers: ").split()))