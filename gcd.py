```
def gcd(a, b):
    a = int(str(a) + str(b))
    b = int(str(b)[::-1])
    while b != 0:
        a, b = b, a % b
    return abs(a)


a = int(input())
b = int(input())

print(gcd(a, b))