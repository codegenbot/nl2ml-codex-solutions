def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Read input from the user
xs = list(map(int, input().split()))

# Call the function with input list
result = find_zero(xs)
print(result)