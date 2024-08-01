def decode_shift(s: str):
    return "".join([(((ord(ch) - 5 - ord("a")) % 26) + ord("a") if ch.islower() else ch) for ch in s])

if __name__ == "__main__":
    input_string = input("Enter the encoded string: ").strip().lower()
    if all(ch.isalpha() and ch.islower() for ch in input_string):
        decoded_string = decode_shift(input_string)
        print(decoded_string)