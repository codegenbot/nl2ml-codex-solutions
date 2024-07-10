```Python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            result += char
    return result

def decode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 - 3) % 26 + 65)
            else:
                result += chr((ord(char) - 97 - 3) % 26 + 97)
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))
print(decode("k dQnT kNqW wHcT Tq wRkTg"))