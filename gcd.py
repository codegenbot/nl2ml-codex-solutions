def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


# Read input
a = int(input())
b = int(input())

# Output
print(gcd(a, b))