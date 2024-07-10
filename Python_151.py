def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return 2 * (odd_sum - min(lst) + max(lst))
print(double_the_difference([1,3,5]))