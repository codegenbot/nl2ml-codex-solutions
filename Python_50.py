def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 1 - ord("a") if ch.islower() else ord("A")) % 26 + ord("a")) if ch.isalpha() or ch.isspace() else ch for ch in s])

input_str = input("Enter the string to decode: ").strip()
if all((ch.islower() or ch.isupper()) and ch.isalpha() or ch.isspace() for ch in input_str):
    result = decode_shift(input_str)
    print(result)
else:
    print("Input string should contain only lowercase and uppercase alphabets and spaces.")