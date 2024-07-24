def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            else:
                new_char = char.swapcase()
            result += new_char
        else:
            result += char
    return result