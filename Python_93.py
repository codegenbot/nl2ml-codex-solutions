def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr(ord(char) + 2) if char.islower() else chr(ord(char) + 2).upper()
            else:
                encoded_message += chr(ord(char) - 1)
        else:
            encoded_message += char
    return encoded_message
