def double_the_difference(lst):
    pos_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return abs(pos_sum - (sum(lst) / len([i for i in lst if isinstance(i, int)])) ** 2)