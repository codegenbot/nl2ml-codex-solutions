def add(a: int, b: int) -> int:
    return a + b


while True:
    try:
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
        result = add(a, b)
        print(result)
    except ValueError:
        print("Please enter integers only")