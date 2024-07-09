```
def sum_squares():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    total = 0
    for i in range(len(lst)):
        if i < len(lst) - 1 and (i + 1) % 4 != 0:
            total += lst[i] ** 2
        elif i < len(lst) - 2 and (i + 2) % 3 != 0:
            total += lst[i] ** 3
    return total

print(sum_squares())