input_string = input("Enter the input string: ")
for char in input_string:
    encoded_message = ''
    encoded_message += chr(
        (ord(char) - ord("A") + 2) % 26 + ord("A") if "A" <= char <= "Z" else ord(char)
    )
    print(encoded_message)