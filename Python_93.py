```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                result += char.upper() if char.isupper() else char.lower()
        else:
            result += char
    return result