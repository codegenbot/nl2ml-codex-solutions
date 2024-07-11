def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
            elif char.islower():
                result += chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
        else:
            result += char
    return result