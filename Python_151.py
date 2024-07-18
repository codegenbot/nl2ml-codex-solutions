def double_the_difference(lst):
    odd_sum = sum(x for x in lst if x % 2 != 0)
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

lst = [1, 2, 3, 4, 5]
print(double_the_difference(lst))