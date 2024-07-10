```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

# Testing the functions
print(gcd(1, 1))
print(indices_of_substring("banana", "ana"))

print(gcd(4, 400000))
print(indices_of_substring("bananaanananana", "ana"))

print(gcd(54, 24))
print(indices_of_substring("hellohellohello", "ello"))

print(gcd(4200, 3528))
print(indices_of_substring("bananabananabanana", "nana"))

print(gcd(820000, 63550))
print(indices_of_substring("bananabanana", "banana"))