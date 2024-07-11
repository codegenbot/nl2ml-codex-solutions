def substitution_cipher(cipher1, cipher2, message):
    deciphered_message = ''
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            deciphered_message += cipher2[index]
        else:
            deciphered_message += char
    return deciphered_message

cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, cipher2, message))