```
def encrypt(s):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    shifted_alphabet = alphabet[2*2:] + alphabet[:2*2]
    result = ''
    for char in s:
        if char.isalpha():
            index = alphabet.index(char.lower())
            if char.isupper():
                result += shifted_alphabet[index].upper()
            else:
                result += shifted_alphabet[index]
        else:
            result += char
    return result