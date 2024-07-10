def solve_task() -> str:
    while True:
        try:
            num1 = int(input("Enter first number: "))
            num2 = int(input("Enter second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter numeric values.")
    
    result = num1 + num2
    
    while True:
        response = input("Are you sure? (y/N): ").lower()
        if response in ["y", "n"]:
            if response == "y":
                return f"Result: {result}" if result != 0 else "No operation performed"
            elif response == "n":
                print("Operation cancelled!")
                return None
        else:
            print("Invalid input. Please enter y or N.")