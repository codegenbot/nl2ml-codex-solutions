```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                ascii_offset = 97 if char.islower() else 65
                result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            else: 
                result += char.lower()
        else:
            result += char if not result or not char.isalnum() else char.lower()
    return result