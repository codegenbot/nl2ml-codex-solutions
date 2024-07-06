
def parse_nested_parens(paren_string: str) -> int:
    max_level = 0
    for group in paren_string.split():
        level = 0
        for char in group:
            if char == "(":
                level += 1
            elif char == ")":
                level -= 1
        max_level = max(max_level, level)
    return max_level