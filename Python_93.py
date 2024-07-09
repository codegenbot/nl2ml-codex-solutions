def encode(message):
    vowels = "aeiou"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message