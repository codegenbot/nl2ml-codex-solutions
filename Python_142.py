```
def sum_of_odd_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if lst[i] % 2 != 0:
            total_sum += lst[i]**2
    return total_sum

print(sum_of_odd_squares([1, 2, 3, 4, 5]))