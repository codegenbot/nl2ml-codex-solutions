def double_the_difference(lst):
    return 2 * sum(x**2 for x in lst if x > 0 and x % 2 != 0 and isinstance(x, int)) if lst else 0