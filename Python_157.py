# Prompt the user to enter values for a, b, and c
a, b, c = map(int, input("Enter three numbers separated by space: ").split())

def is_pythagorean_triple(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

print(is_pythagorean_triple(a, b, c))