```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = vowels.index(char.lower()) + 2
                result += vowels[index % 6]
            else:
                result += char.swapcase()
        else:
            result += char
    return result