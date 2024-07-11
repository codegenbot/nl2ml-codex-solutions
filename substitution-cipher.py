```Python
def decipher(cipher1, cipher2, message):
    mapping = {k: v.lower() if c.islower() else v.upper() for k,v,c in zip(cipher1, cipher2, map(str, cipher1))}
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += mapping.get(char.lower(), char).upper()
            else:
                result += mapping.get(char, char)
        else:
            result += char
    return result