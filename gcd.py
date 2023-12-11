
```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
            # Check for overlapping indices
            j = i + len(target) - 1
            while j < len(text):
                if text[j:j+len(target)] == target:
                    indices.append(j)
                j += len(target)
    return indices
```