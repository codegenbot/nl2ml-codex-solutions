a_value, b_value, c_value = map(int, input("Enter the values for a, b, c: ").split())
def check_pythagorean_triplet(a, b, c):
    return a**2 + b**2 == c**2 or a**2 + c**2 == b**2 or b**2 + c**2 == a**2

result = check_pythagorean_triplet(a_value, b_value, c_value)
print(result)