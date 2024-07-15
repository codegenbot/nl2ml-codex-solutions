def decode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.islower():
                result += chr((ord(char) - 97 - 3) % 26 + 97)
            else:
                result += chr((ord(char) - 65 - 3) % 26 + 65)
        else:
            result += char
    return result