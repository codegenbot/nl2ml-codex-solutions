def double_the_difference(lst):
    return sum(x**2 for x in lst if x % 2 != 0 and x >= 0 and isinstance(x, int)) * 2 if lst else 0

result = double_the_difference([3, 5, 7, -2, 9])
print(result)