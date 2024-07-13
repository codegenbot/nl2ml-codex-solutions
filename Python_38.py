def decode_cyclic(s: str):
    if len(s) < 1:
        return ""
    result = ""
    while len(s) >= 3:
        group = s[:3]
        result += group[1] + (group[0] if group != "999" else "")
        s = s[3:]
    result += s
    return result