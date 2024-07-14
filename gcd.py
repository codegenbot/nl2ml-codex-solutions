def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

print(f"GCD of {a} and {b} is {gcd(min(a, b), max(a, b))}")