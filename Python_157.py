def is_pythagorean_triple(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2


a, b, c = map(int, input("Enter the values of a, b, c: ").split())
print(is_pythagorean_triple(a, b, c))