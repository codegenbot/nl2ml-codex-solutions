def substitution_cipher(input1, input2, input3):
    cipher = {c1: c2 for c1, c2 in zip(input1, input2)}
    return "".join(cipher.get(c, c) for c in input3)