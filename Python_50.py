def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Prompt user to enter the string for decoding
input_str = input("Enter the string to decode: ")
result = decode_shift(input_str)
print(result)