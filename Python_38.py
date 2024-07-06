Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
            if len(group) == 1:
                result += group[0] * 3
            else:
                result += group[1] + group[0]
        else:
            result += s[i]
        i += 1
    return result