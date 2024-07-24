def double_the_difference(lst):
    total = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return total


print(double_the_difference([1, 3, 5]))