def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels and char.islower():
                encoded_message += chr(ord(char) + 1)
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message