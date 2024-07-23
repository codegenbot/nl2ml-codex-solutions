def substitution_cipher(cipher1, cipher2, message):
    cipher = {k.lower(): v for k, v in zip(cipher1, cipher2)}
    return "".join([cipher.get(char.lower(), char) if char.isalpha() or char == " " else " " for char in message])