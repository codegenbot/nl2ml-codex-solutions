def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") if ch.islower() else ord(ch) for ch in s])

if __name__ == "__main__":
    input_string = input("Enter the encoded string: ").strip().lower()
    decoded_string = decode_shift(input_string)
    print(decoded_string)