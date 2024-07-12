```python
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

a = int(input())
b = int(input())

print(gcd(a, b))

def find_indices(text, target):
    indices = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices

text = input()
target = input()

print(find_indices(text, target))