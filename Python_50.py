def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


try:
    input_str = input("Enter the string to decode: ").strip()
    result = decode_shift(input_str)
    print(result)
except Exception as e:
    print("Invalid input. Please enter a valid string.")