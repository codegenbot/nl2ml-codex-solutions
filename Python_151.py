def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

lst = [1, 3, 5, 2, 4, 6]
result = double_the_difference(lst)
print(result)