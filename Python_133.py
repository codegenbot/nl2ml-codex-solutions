```
while True:
    choice = input("Do you want to calculate sum of squares (yes/no)? ")
    if choice.lower() != 'yes':
        print("Program terminated.")
        break
    while True:
        numbers = input("Enter numbers separated by space: ").split()
        if not numbers:
            print("Please enter some numbers.")
            continue
        while not all(map(lambda x: isinstance(int(x), int) and int(x) > 0, numbers)):
            print("Invalid input. Please enter valid positive numbers separated by space:")
            numbers = input("Enter numbers separated by space: ").split()
        
        total_sum_of_squares = sum([n ** 2 for n in map(int, numbers)])
        print(f"The sum of squares is {total_sum_of_squares}")

    break

def sum_squares(numbers):
    return sum(map(lambda x: x ** 2, numbers))