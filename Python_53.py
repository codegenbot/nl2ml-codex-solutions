def add(x: int, y: int):
    while True:
        try:
            x = int(input("Enter the first number: "))
            y = int(input("Enter the second number: "))
            return x + y
        except ValueError:
            print("Invalid input. Please enter numbers.")