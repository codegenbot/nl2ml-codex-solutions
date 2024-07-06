```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.islower():
                if char in 'aeiou':
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
                else:
                    result += chr(ord(char) + 1).upper()
            else:
                if char in 'AEIOU':
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr(ord(char) - 1).lower()
        else:
            result += char
    return result