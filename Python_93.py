```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.lower() == 'a':
                    result += 'c'
                elif char.lower() == 'e':
                    result += 'g'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'o':
                    result += 'q'
                else:
                    result += 's'
            else:
                if char.isupper():
                    result += chr((ord(char) + 2) % 26).upper()
                else:
                    result += chr((ord(char) + 2) % 26)
        else:
            result += char
    return result