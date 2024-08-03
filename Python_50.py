def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

input_str = input("Enter a string: ")
decoded_output = decode_shift(input_str)
print(decoded_output)