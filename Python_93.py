input_char = input("Enter the message to encode: ").upper()
if input_char.isalpha() and len(input_char) == 1:
    encoded_char = chr((ord(input_char) - ord("A") + 2) % 26 + ord("A"))
    print(encoded_char)
else:
    print("Input should contain only a single uppercase alphabetic character.")