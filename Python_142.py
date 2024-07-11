def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, (int, float)):
            if num ** 0.5 == int(num ** 0.5):
                total_sum += num ** 2
            else:
                total_sum += num
    return total_sum