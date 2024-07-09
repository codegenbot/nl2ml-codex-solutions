def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 - 3) % 26 + 65)
            else:
                result += chr((ord(char) - 97 - 3) % 26 + 97)
        elif not char.isalnum():
            result += '*'
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))