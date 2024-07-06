def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if len(stack) == 0:
                result.append(current_group)
                current_group = ""
            else:
                stack.pop()
                current_group += char
        else:
            current_group += char
    return result