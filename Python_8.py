def sum_product(numbers):
    if len(numbers) == 0:
        return 0, 1
    else:
        return sum(numbers), eval('*'.join(map(str, numbers)))