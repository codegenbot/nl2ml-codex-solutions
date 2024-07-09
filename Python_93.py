def encode(message):
    encoded_message = ""
    vowels = 'AEIOUaeiou'
    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += chr((ord(char) - ord('A') + 9) % 26 + ord('A'))
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message