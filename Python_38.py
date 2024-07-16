def decode_cyclic(s: str) -> str:
    groups = [s[(3 * i): min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

input_string = input("Enter the input string (uppercase alphabet characters only): ").strip()
if input_string.isalpha() and input_string.isupper():
    result = decode_cyclic(input_string)
    print(result)
else:
    print("Input string is not in correct format.")