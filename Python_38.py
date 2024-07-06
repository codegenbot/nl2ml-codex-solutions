Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        if group[0] == group[2]:
            result += group[0]
            s = s[3:]
        else:
            result += group[1]
            s = s[3:]
    result += s
    return result