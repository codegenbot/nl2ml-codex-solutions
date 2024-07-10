def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord('a')) % 26) + ord('a') if ch.isalpha() else ch for ch in s])

user_input = input('Enter the encoded string: ').strip().lower()
result = decode_shift(user_input)
print(result)