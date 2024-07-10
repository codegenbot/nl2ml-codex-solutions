def double_the_difference(lst):
    result = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return result if len(lst) > 0 else 0