```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

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

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))
text = input("Enter the text string: ")
target = input("Enter the target string: ")
print(find_indices(text, target))