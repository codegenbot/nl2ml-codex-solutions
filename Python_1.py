def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    stack = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            stack.pop()
            if not stack:
                result.append(current_group)
                current_group = ""
        current_group += char
    return result