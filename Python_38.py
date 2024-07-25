def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return s
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        result += group[1] + group[0]
        i += 3
    return result