def decode_cyclic(s: str):
    s += '_' * (3 - len(s) % 3)
    groups = [s[i:i + 3] for i in range(0, len(s), 3)]
    groups = [(group[-1] + group[:-1]) for group in groups]
    return "".join(groups)

s = input("Enter the string: ")
result = decode_cyclic(s)
print(result)