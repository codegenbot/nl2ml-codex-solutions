def decode_shift(s: str):
    return "".join(
        [chr(((ord(ch) - ord("a")) % 26) + ord("a")) for ch in s if ch.islower()]
    )


input_string = input("Enter a string to decode: ").lower()
print(decode_shift(input_string))