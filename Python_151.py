def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) if lst else 0

# Example input list
input_list = [3, 5, 2, -1, 4]

# Call the function with the input list
result = double_the_difference(input_list)
print(result)