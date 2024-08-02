def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Read input
numbers = list(map(float, input().split())

# Call the function with the input list
result = find_zero(numbers)
print(result)