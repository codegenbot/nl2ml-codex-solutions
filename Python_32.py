def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Input list from user
input_list = list(map(float, input().split())

# Call the function with the input list
result = find_zero(input_list)
print(result)