def sum_squares():
    numbers = list(map(int, input("Enter a comma-separated list of numbers: ").split(',')))
    total_sum = 0
    for i in range(len(numbers)):
        if (i % 3 == 0 and i % 4 != 0) or (i % 4 == 0 and i % 3 != 0):
            total_sum += numbers[i] ** ((i % 3 + 1) * (i % 4 + 1))
    return total_sum

print(sum_squares())