def encode(message):
    encoded_message = ""
    for char in message:
        if char.lower() in 'aeiouAEIOU':
            encoded_message += chr((ord(char) + 2 - ord('A')) % 26 + ord('A'))
        else:
            encoded_message += char.swapcase()
    return encoded_message