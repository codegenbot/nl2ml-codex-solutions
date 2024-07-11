```
def add_and_display():
    while True:
        try:
            x = int(input("Enter first number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    while True:
        try:
            y = int(input("Enter second number: "))
            if y < 0:
                print("Please enter a positive number.")
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    result = x + y
    print(f"The sum of {x} and {y} is {result}")