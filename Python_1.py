def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp = ""
        elif char == ")":
            result.append(temp + ")")
        else:
            temp += char
    return result