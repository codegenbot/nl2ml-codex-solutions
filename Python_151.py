def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)

# Example usage
my_list = [1, 2, 3, 4, 5]
result = double_the_difference(my_list)
print(result)