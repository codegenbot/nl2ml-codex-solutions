def decode_shift(s: str):
    return "".join(
        [chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) for ch in s]
    )


input_str = input("Enter the string to decode: ")
print(decode_shift(input_str))