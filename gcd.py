```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))