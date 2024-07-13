def substitution_cipher(cipher, message):
    cipher_map = {k: v for k, v in zip(cipher, cipher)}
    deciphered_message = [cipher_map.get(char, char) for char in message]
    return "".join(deciphered_message)