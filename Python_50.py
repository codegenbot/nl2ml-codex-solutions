```
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a")) % 26) + ord("a")) if ch.isalpha() and ch.lower() >= "a" and ch.lower() <= "z"
                    else ch for ch in s])