Here is the modified code:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(i + 1)  
    return result