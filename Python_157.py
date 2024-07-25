def is_pythagorean_triple():
    a, b, c = map(int, input().split())
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

result = is_pythagorean_triple()
print(result)