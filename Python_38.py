def decode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

# Read input from the user
input_string = input("Enter a string: ")
# Call the decode_cyclic function and print the output
print(decode_cyclic(input_string))