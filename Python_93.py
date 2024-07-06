```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'y'}.get(char.lower(), char.swapcase())
            else:
                result += char.swapcase()
        else:
            result += char
    return result