def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            if len(temp) > 1:
                result.append(temp[1:] + temp[0])
            else:
                result.append(temp)
            temp = ""
    if temp and len(temp) % 3 != 0:
        if len(temp) > 1:
            result.append(temp[1:] + temp[0])
        else:
            result.append(temp)
    return "".join(result)