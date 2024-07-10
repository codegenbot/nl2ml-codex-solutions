def substitution_cipher(cipher_text1, cipher_text2, text):
    cipher_dict = {cipher_text1[i]: cipher_text2[i] for i in range(len(cipher_text1))}
    deciphered_text = "".join([cipher_dict.get(char, char) for char in text])
    return deciphered_text