def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_message += chr((ord(char) - 97 + 2) % 26 + 97)
            else:  
                encoded_message += chr((ord(char) - 65 + 2) % 26 + 65)
        else:
            encoded_message += char
    return encoded_message