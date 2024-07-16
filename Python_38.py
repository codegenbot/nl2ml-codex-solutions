def decode_cyclic():
    s = input("Enter the input string: ").strip()
    
    if not s.isalpha():
        return "Input string is not in correct format."
    
    groups = [s[(3 * i): min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

print(decode_cyclic())