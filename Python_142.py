```
def sum_squares(lst):
    total_sum = 0
    for i, num in enumerate(lst):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += num ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += num ** 3
    return total_sum

def check(func, numbers):
    print(f"The sum of squares is: {func(numbers)}")

numbers = list(map(int, input("Enter a sequence of space-separated numbers: ").split()))
check(sum_squares, numbers)