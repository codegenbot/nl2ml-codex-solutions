def parse_nested_parens(paren_string: str) -> list:
    result = []
    level = 0
    max_level = 0

    for char in paren_string:
        if char == "(":
            level += 1
        elif char == ")":
            level -= 1
        if level > max_level:
            max_level = level

    return [max_level]