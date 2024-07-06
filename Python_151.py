```
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return odd_sum*2


input_list = [1, 2, 3]
print(double_the_difference(input_list))