```Python
import math


def find_zero():
    while True:
        try:
            a = float(input("Enter coefficient 'a' (non-zero): "))
            b = float(input("Enter coefficient 'b': "))
            c = float(input("Enter coefficient 'c': "))
            if a != 0:
                break
            print("Coefficient 'a' must be non-zero. Please enter again.")
        except ValueError:
            print("Invalid input. Please enter numeric values.")

    discriminant = b**2 - 4 * a * c

    if discriminant > 0:
        x1 = (b + math.sqrt(discriminant)) / (2 * a)
        x2 = (b - math.sqrt(discriminant)) / (2 * a)
        return f"Root 1: {round(x1, 2)}, Root 2: {round(x2, 2)}"
    elif discriminant == 0:
        x = -b / (2 * a)
        return f"Root: {round(x, 2)}"
    else:
        return "No real roots found"


while True:
    print("Find roots of quadratic equation ax^2 + bx + c = 0: ")
    print(find_zero())