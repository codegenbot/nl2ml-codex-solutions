def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))
    result = add(x, y)
    print(result)
except ValueError:
    print("Please enter valid integers for input")