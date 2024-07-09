def encode(message):
    vowels = "AEIOUaeiou"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr((ord(char) + 3 - ord('A')) % 26 + ord('A')).upper()
            else:
                encoded_message += chr((ord(char) + 2 - ord('A')) % 26 + ord('A'))
        else:
            encoded_message += char
    return encoded_message