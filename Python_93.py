def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""
    
    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                if char == 'z':
                    encoded_message += 'a'
                elif char == 'Z':
                    encoded_message += 'A'
                else:
                    encoded_message += chr(ord(char) + 2)
        else:
            encoded_message += char
    
    return encoded_message