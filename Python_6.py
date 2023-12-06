def parse_nested_parens(paren_string: str) -> List[int]:
    max_level = 0
    current_level = 0
    output = []
    for char in paren_string:
        if char == '(':
            current_level += 1
            if current_level > max_level:
                max_level = current_level
        elif char == ')':
            current_level -= 1
        else:
            raise ValueError("Invalid character in parentheses string")
    output.append(max_level)
    return output