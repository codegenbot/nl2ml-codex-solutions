def add(x, y):
    return x + y

try:
    x, y = map(int, input().split())

    result = add(x, y)
    print(result)
except ValueError:
    print("Invalid input. Please enter valid integers.")