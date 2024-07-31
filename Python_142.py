def sum_squares(lst):
    total_sum = 0
    for i, num in enumerate(lst):
        if (i + 1) % 3 == 0:
            total_sum += num**2
        elif (i + 1) % 4 == 0 and (i + 1) % 3 != 0:
            total_sum += num**3
    return total_sum