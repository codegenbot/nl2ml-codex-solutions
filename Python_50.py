s = input("Enter the string to decode: ")
def decode_shift(s: str):
    s = s.lower()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])