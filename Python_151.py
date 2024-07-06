def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num**2
    return result


# test case
print(double_the_difference([1, 2, 3]))  # output: 14