Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 3 and group[1] != group[0]:
            result += group[2] + group[0] + group[1]
        else:
            result += group
        i += 3
    return result