def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            result += group[1] + (group[0] if group != "111" else "")
            group = ""
    return result + group[1:] + group[0]