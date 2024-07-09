def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr((ord(char) + 3 - ord("A" if char.isupper() else "a")) % 26 + ord("A" if char.isupper() else "a"))
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message