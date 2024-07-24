```
def sum_squares(lst):
    total_sum = 0
    for i, num in enumerate(lst):
        if (i+1) % 3 == 0 and (i+1) % 4 == 0:
            total_sum += num ** 3
        elif (i+1) % 3 == 0:
            total_sum += num ** 2
    return total_sum

numbers = []
while True:
    try:
        num = float(input())
        numbers.append(num)
        break
    except ValueError:
        print("Invalid input. Please enter a number.")

print(sum_squares(numbers))