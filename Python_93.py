encoded_message += chr(
    (ord(char) - (ord("A") if char.isupper() else ord("a")) + 2) % 26
    + (ord("A") if char.isupper() else ord("a"))
)