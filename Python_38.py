def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group
        for group in groups
        if group
    ]
    return "".join(groups)


# Read input from user
s = input()
# Call the function with user input
result = decode_cyclic(s)
# Display the result
print(result)