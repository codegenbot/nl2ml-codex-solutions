def substitution_cipher(cipher1, cipher2, message):
    cipher = {a: b for a, b in zip_longest(cipher2, cipher1)}
    deciphered_message = "".join([cipher.get(char.upper(), char) for char in message])
    return deciphered_message