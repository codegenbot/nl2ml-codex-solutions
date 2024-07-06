def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    even_sum = sum(i for i in lst if isinstance(i, int))
    return abs(odd_sum - even_sum) * 2