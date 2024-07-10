def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and type(x) == int and x % 2 != 0)

input_list = [1, 2, 3, 4, 5]
result = double_the_difference(input_list)
print(result)