def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            if current_group != "":
                result.append(current_group)
            current_group = ""
        current_group += char
        if char == ")":
            result.append(current_group)
            current_group = ""
    return result