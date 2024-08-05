def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                if char.isupper():
                    new_char = chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
                else:
                    new_char = chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                new_char = char.swapcase()
            encoded_message += new_char
        else:
            encoded_message += char
    return encoded_message