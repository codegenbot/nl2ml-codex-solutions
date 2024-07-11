def add() -> None:
    try:
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))

        result = num1 + num2  
        print(f"Result: {result}")
    except ValueError:
        print("Invalid input. Please enter integers.")