Here is the solution for the problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input())
b = int(input())
print(gcd(a, b))