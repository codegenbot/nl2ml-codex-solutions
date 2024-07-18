def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a") + 21) % 26) + ord("a")) for ch in s])

input_str = input().strip()
print(decode_shift(input_str))