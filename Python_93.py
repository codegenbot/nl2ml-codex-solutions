```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded_char = chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                encoded_char = chr((ord(char) - 97) % 26 + 97)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message