```Python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char) - ascii_offset + 2) % 26 + ascii_offset)
        else:
            result += char
    return result