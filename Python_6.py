def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    for group in paren_string.split():
        max_level = 0
        curr_level = 0
        for char in group:
            if char == "(":
                curr_level += 1
                if curr_level > max_level:
                    max_level = curr_level
            elif char == ")":
                curr_level -= 1
        levels.append(max_level)
    return levels