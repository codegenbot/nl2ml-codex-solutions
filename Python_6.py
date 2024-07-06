def parse_nested_parens(paren_string):
    result = []
    level = 0
    for group in paren_string.split():
        level += 1
        for char in group:
            if char == "(":
                level += 1
            elif char == ")":
                level -= 1
        if level == 0:
            result.append(level)
    return result