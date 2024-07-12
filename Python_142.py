```
def sum_squares(lst):
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum

while True:
    user_input = input("Enter a list of numbers separated by space: ")
    try:
        lst = list(map(int, user_input.split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

print(sum_squares(lst))