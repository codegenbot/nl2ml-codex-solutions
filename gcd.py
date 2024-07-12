def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input())
b = int(input())

print(gcd(a, b))

def find_indices(text, target):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find(target, index)
        if pos != -1:
            indices.append(pos)
            index = pos + 1
        else:
            break
    return indices

text = input()
target = input()

print(find_indices(text, target))