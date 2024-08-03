def substitution_cipher():
    cipher_map = [c for c1, c2 in zip(input(), input())]
    message = input()
    return "".join(
        [c for c in message if c in cipher_map]
        + [c for c in message if c not in cipher_map]
    )