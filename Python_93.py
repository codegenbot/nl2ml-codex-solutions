```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += 'c'
            elif char.lower() == 'e':
                result += 'g'
            elif char.lower() == 'i':
                result += 'k'
            elif char.lower() == 'o':
                result += 'q'
            elif char.lower() == 'u':
                result += 'w'
            else:
                if char.isupper():
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            result += char
    return result