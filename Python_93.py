def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char.upper()) - ord("A") + 3) % 26 + ord("A"))
            else:
                encoded_message += chr((ord(char.upper()) - ord("A") + 4) % 26 + ord("A"))
        else:
            encoded_message += char

    return encoded_message