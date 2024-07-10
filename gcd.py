def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        if text[index:index+len(target)] == target:
            result.append(index)
            index += len(target) - 1
        else:
            index += 1
    return result