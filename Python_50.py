def encode_shift(s):
    return "".join(
        [chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a")) for ch in s.strip()]
    )

def decode_shift(s):
    return "".join(
        [chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) for ch in s.strip()]
    )

def main():
    s = input().strip()
    encoded = encode_shift(s)
    decoded = decode_shift(encoded)
    print("Encoded:", encoded)
    print("Decoded:", decoded)

if __name__ == "__main__":
    main()