def double_the_difference(numbers):
    return sum(i**2 for i in numbers if isinstance(i, int) and i > 0) * 2
check(double_the_difference([1, 2, 3]))