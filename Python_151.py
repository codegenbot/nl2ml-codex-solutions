def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

double_the_difference([1, 2, 3, 4, 5])