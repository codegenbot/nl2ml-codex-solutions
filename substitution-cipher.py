def substitution_cipher(cipher1, cipher2, message):
    cipher = {a.lower(): b for a, b in zip(cipher1, cipher2)}
    deciphered_message = "".join([cipher.get(char.lower(), char) for char in message])
    return deciphered_message