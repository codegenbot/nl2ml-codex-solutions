numbers = input("Enter numbers separated by space: ").split()
def sum_squares(lst):
    return round(sum([round(int(x))**2 for x in lst]))

while True:
    try:
        total_sum_of_squares = sum_squares(numbers)
        break
    except ValueError:
        print("Invalid input. Please enter valid numbers separated by space:")
        numbers = input().split()

print(f"The sum of squares is {total_sum_of_squares}")