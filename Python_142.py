def sum_squares():
    lst = list(map(int, input("Enter numbers separated by space: ").split()))
    total = 0
    for i in range(len(lst)):
        if (i + 1) % 3 == 0 and (i + 1) % 4 != 0:
            total += lst[i] ** 2
        elif (i + 1) % 4 == 0 and (i + 1) % 3 != 0:
            total += lst[i] ** 3
    print("Sum of squares:", total)