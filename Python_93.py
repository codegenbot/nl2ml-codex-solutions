def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr((ord(char) + 1 - ord('A')) % 26 + ord('A'))
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message