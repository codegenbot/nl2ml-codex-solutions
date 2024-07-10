```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += 'A'
                elif char == 'Y' or char == 'y':
                    result += 'B'
                else:
                    result += chr(ord(char.lower()) + 1).upper()
            else:
                if char in ['a', 'e', 'i', 'o', 'u']:
                    if char == 'a':
                        result += 'B'
                    elif char == 'e':
                        result += 'G'
                    elif char == 'i':
                        result += 'K'
                    elif char == 'o':
                        result += 'Q'
                    else:
                        result += chr(ord(char) + 1)
                else:
                    result += chr(ord(char) + 1).upper()
        else:
            result += char
    return result