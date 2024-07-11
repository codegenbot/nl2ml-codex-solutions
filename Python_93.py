def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) - 97 + 3) % 26 + 97)
            elif char.isupper():
                result += chr((ord(char.lower()) - 97 + 1) % 26 + 65)
            else:
                result += char
        else:
            result += char
    return result