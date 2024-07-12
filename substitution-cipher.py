def substitution_cipher(cipher1, cipher2, message):
    cipher = {cipher1[i]: cipher2[i] for i in range(min(len(cipher1), len(cipher2)))}
    deciphered_message = "".join([cipher.get(char.lower(), char) for char in message])
    return deciphered_message