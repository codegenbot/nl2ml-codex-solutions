def decode_cyclic(s: str):
    result = []
    temp_group = ""
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            if len(result) > 0 and len(result[-1]) == 3:
                result[-1] = result[-1][1:] + result[-1][0]
            result.append(temp_group)
            temp_group = ""
    if len(temp_group) > 0:
        if len(result) > 0 and len(result[-1]) == 3:
            result[-1] = result[-1][1:] + result[-1][0]
        else:
            temp_group = temp_group[1:] + temp_group[0]
    return "".join(result + [temp_group])