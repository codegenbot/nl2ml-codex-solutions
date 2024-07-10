```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    result += 'c'
                elif char.lower() == 'e':
                    result += 'g'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'o':
                    result += 'q'
                else:
                    result += 'u'
            else:
                if char.islower():
                    result += chr(ord(char) + 1).upper()
                else:
                    result += chr(ord(char) - 1).lower()
        else:
            result += char
    return result