def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if temp[0] == temp[2]:
                result += temp[1]
            else:
                result += temp
            temp = ""
    if temp:
        if len(temp) <= 2: 
            result += temp
        return result  # return the result as it is, no need to process further
    return result