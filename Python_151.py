def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) if lst else 0


lst = [1, 2, 3, 4, 5]
odd_sum = double_the_difference(lst)
print(odd_sum)