def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                if char.lower() == 'z':
                    encoded_message += 'b' if char.islower() else 'B'
                else:
                    encoded_message += chr(ord(char) + 1)
        else:
            encoded_message += char
    return encoded_message