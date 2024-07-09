lst = list(map(int, input("Enter a list of integers separated by space: ").split()))


def double_the_difference(lst):
    odd_sum = sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2


result = double_the_difference(lst)
print(result)