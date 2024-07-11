def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s):  
            group = s[i:i+3]
        else:
            group = s[i:] + 'zzz' 
        if len(group) >= 3: 
            result += group[1] + group[0] + group[2]
        else:
            result += group
        i += 3
    return result