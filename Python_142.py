def sum_squares(lst):
    total_sum = 0
    for i, num in enumerate(lst):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += num**2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += num**3
    return total_sum


def check():
    lst = list(map(int, input("Enter space-separated numbers: ").split()))
    print(sum_squares(lst))


check()