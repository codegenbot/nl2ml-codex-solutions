def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char) - ord("A") + 3) % 26 + ord("A")) if char.isupper() else chr((ord(char) - ord("a") + 3) % 26 + ord("a"))
            else:
                encoded_message += chr((ord(char) - ord("A") + 3) % 26 + ord("A")) if char.isupper() else chr((ord(char) - ord("a") + 3) % 26 + ord("a")
        else:
            encoded_message += char

    return encoded_message