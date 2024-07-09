def decode_cyclic(s: str):
    s = input()
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:2]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

# Call the function to perform the decoding
result = decode_cyclic("")
print(result)