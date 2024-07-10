def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos)
        start = pos + 1
    return result

a, b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, b))

text, *_ = input("Enter text: ").split()
target, *_ = input("Enter target string: ").split()
print(*indices_of_substring(text, target))