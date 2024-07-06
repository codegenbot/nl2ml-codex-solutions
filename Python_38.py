def decode_cyclic(s):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    i = 0
    while i < len(s):
        if len(s[i:]) >= 3:
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 1:
            result += group[0] * 2
        elif len(group) == 2: 
            result = group[1] + result  
        else:  
            result += group[0] * 2  
        i += 3
    return result