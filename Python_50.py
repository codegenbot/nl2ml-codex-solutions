def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

try:
    input_str = raw_input("Enter the string to decode: ") if sys.version_info[0] < 3 else input("Enter the string to decode: ")
    result = decode_shift(input_str)
    print(result)
except Exception as e:
    print("Invalid input. Please enter a valid string.")