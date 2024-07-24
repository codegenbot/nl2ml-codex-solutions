```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    target_len = len(target)
    for i in range(len(text)):
        if text[i : i + target_len] == target:
            result.append(i)
    return result

print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))