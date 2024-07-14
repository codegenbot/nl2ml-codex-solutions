Here is the solution to the problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos)
        start = pos + 1
    return result

# Test cases
print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))