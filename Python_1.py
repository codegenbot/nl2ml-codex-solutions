def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    count = 0
    group = ""
    for char in paren_string:
        group += char
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
        if count == 0:
            result.append(group)
            group = ""
    return result