```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(pos + 1)
        i += pos + 1
    return result

# Test cases
print(gcd(1, 1))  # Output: 1
print(gcd(4, 400000))  # Output: 4
print(gcd(54, 24))  # Output: 6
print(gcd(4200, 3528))  # Output: 168
print(gcd(820000, 63550))  # Output: 2050