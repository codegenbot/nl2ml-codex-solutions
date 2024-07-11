```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (ord(char.lower()) - ord('a') + 2) % 26
                encoded_char = chr(ord('a') + index)
                encoded_message += encoded_char if char.isupper() else encoded_char.lower()
            else:
                index = (ord(char.lower()) - ord('n')) % 13
                encoded_char = chr(ord('n') + index) if char.isupper() else chr(ord('n') + index).lower()
                encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message