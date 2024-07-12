def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Get input from the user
input_string = input("Enter the string to decode: ")
result = decode_shift(input_string)
print(result)