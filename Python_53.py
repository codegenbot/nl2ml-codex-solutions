```
def add(x: int, y: int):
    return x + y


while True:
    try:
        while True:
            try:
                x = int(input("Enter first number: "))
                y = int(input("Enter second number: "))
                print("The sum is: ", x + y)
                break
            except ValueError:
                print("Invalid input. Please enter an integer.")
                
        response = input("Do you want to calculate the sum again? (yes/no): ")
        if response.lower() != "yes":
            exit()
    except Exception as e:
        print(f"Error: {e}. Goodbye!")
        exit()