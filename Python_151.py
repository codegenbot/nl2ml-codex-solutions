def check(func, lst):
    return func(lst) * 2

def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)

check(double_the_difference, lst) == odd_sum