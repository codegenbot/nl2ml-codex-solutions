def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[0] / xs[n - 1] if n == 2 else 1.0

# Read input from the user
input_list = input().split()
input_list = list(map(int, input_list))

# Call the function with the input list
result = find_zero(input_list)
print(result)