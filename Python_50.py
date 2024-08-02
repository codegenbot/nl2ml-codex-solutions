def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.islower()])

input_str = input("Enter the string to decode (lowercase letters only): ")
while not input_str.islower():
    input_str = input("Enter the string to decode (lowercase letters only): ")

decoded_str = decode_shift(input_str)
print(decoded_str)