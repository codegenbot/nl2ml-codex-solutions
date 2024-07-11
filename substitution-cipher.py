def decipher(cipher1, cipher2, message):
    mapping = {k.lower(): v.lower() if c.islower() else v.upper() for k,v,c in zip(cipher1, cipher2, map(str, cipher1))}
    result = ""
    for char in message:
        if char.isalpha():
            result += mapping.get(char.lower(), char)
        else:
            result += char