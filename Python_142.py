def sum_squares():
    lst = [int(x) for x in input("Enter elements of the list, space-separated: ").split()]
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum

print(sum_squares())