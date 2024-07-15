def decode_cyclic(s: str):
    if len(s) < 3:
        return "Input string length should be at least 3"
    
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

while True:
    input_string = input("Enter a string: ").strip()
    if input_string and len(input_string) >= 3:
        break

result = decode_cyclic(input_string)
print(result)