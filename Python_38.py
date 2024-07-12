def decode_cyclic() -> str:
    s = input("Enter the string: ")
    result = ""
    if len(s) >= 3:
        while len(s) >= 3:
            group = s[:min(3, len(s))]
            result += group[1] + group[0] + group[-1]
            s = s[len(group):]
        if s:
            result += s
    else:
        result = s
    return result

print(decode_cyclic())