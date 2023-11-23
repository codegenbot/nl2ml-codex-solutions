def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in ['a', 'e', 'i', 'o']:
                encoded_message += chr(ord(char) - 1)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message