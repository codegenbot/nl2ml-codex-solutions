def sum_squares(lst):
    total = 0
    for num in lst:
        if num % 2 == 0:
            total += num ** 2
        else:
            total += num ** 3
    return total