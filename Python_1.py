def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")":
            if stack:
                stack.pop()
                if not stack:
                    result.append(current_group)
                    current_group = ""
        elif stack:
            current_group += char

    if current_group:
        result.append(current_group)

    return result