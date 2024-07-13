Here is the completed code:

def decode_cyclic(s: str):
    result = []
    while len(s) >= 3:
        group = s[:3]
        result.append(group[1] + (group[0] if len(group) > 1 else ''))
        s = s[3:]
    result.append(s)
    return "".join(result)