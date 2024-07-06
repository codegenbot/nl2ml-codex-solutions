def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if (i + 1) % 3 == 0:
            total_sum += lst[i] ** 2
        elif (i + 1) % 4 == 0:
            total_sum += lst[i] ** 3
    return total_sum

print(sum_squares([1, 2, 3, 4, 5, 6]))