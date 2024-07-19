def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                if char.isupper():
                    result += chr((ord(char.lower()) - 97 + 3) % 26 + 65)
                else:
                    result += char.swapcase()
        else:
            result += char
    return result