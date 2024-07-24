def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            result += chr((ord(char) - ord('a') + 3) % 26 + ord('a')) if char.islower() else chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
        else:
            result += char
    return result