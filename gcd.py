```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text = input()
target = input()

indices = [i for i in range(len(text)) if text.startswith(target, i)]

print(gcd(int(input()), int(input())))
print(indices)