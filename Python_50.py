def decode_shift():
    s = input()
    return "".join(
        [chr((ord(ch) - 97) % 26 + 97) if "a" <= ch.lower() <= "z" else ch for ch in s]
    ).lower()