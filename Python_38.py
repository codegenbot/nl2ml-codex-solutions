Here is the solution:

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and (result[-1] == temp[0]):
                result += temp[2]
            else:
                result += temp
            temp = ""
    return result + temp