def fuel_cost(arr):
    return sum([max(0, num // 3 - 2) for num in arr])


arr = list(map(int, input().split()))
print(fuel_cost(arr))