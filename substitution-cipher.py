def substitution_cipher():
    cipher_text1 = input()
    cipher_text2 = input()
    message = input()
    deciphered_message = ""

    for char in message:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            deciphered_message += cipher_text2[index]
        else:
            deciphered_message += char

    return deciphered_message


print(substitution_cipher())