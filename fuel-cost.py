Here is the Python solution:

def fuel_cost(n):
    return sum((i//3)-2 for i in map(int, input().split()))