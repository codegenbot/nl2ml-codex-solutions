```Python
''


def add(x: int, y: int):
    if x < 0 and y < 0:
        return -1 * (abs(x) + abs(y))
    else:
        return x + y


while True:
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a whole number.")

print(add(x, y))''