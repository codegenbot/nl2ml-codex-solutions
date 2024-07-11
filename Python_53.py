```
def add(x, y):
    return x + y

while True:
    try:
        x = int(input("Enter first number: "))
        if x < 0:
            print("Please enter a positive number.")
            continue
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

while True:
    try:
        y = int(input("Enter second number: "))
        if y < 0:
            print("Please enter a positive number.")
            continue
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

try:
    print(add(x, y))
except TypeError:
    print("Expected input types not matched.")