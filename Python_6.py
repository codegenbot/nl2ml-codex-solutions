def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == "(":
            level += 1
        elif char == ")":
            level -= 1
        if level == 0:
            result.append(0)
            level = 0
    return result