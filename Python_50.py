def decode_shift(s: str):
    return "".join([chr(((ord(ch) + 21 - ord('a')) % 26) + ord('a')) for ch in s])