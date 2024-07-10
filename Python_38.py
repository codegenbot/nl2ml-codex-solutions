def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)


# Read input from user
encoded_str = input()

# Decode the encoded string
decoded_str = decode_cyclic(encoded_str)

# Display the decoded string
print(decoded_str)