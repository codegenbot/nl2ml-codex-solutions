```
def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        result += group[1] + (group[0] if len(group) > 1 else "")
        s = s[3:]
    result += s
    return result