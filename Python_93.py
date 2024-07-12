````
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
            else:
                result += char.swapcase()
        else:
            result += char
    return result