def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                encoded_message += chr(ord(char.lower()) + 2).upper()
            else:
                encoded_message += chr(ord(char.lower()) + 2)
        else:
            encoded_message += char
    return encoded_message