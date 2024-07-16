def encode(message):
    vowels = "aeiouAEIOU"
    try:
        return "".join(
            (
                chr(ord(char) + 1)
                if char.isalpha() and char.upper() in vowels
                else char.swapcase() if char.isalpha()
                else char  # Return non-alphabetic characters unchanged
            )
            for char in message
        )
    except Exception as e:
        return "Invalid input. Please enter a message containing only alphabets or special characters."


print(
    encode(input("Enter a message containing only alphabets or special characters: "))
)