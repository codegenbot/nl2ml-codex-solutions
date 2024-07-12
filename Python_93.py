def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr((ord(char) + 2 - ord("a")) % 26 + ord("a"))
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message