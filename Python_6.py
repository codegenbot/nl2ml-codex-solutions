def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        level = 0
        for char in group:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            if level < 0:
                break
        result.append(level)
    return result

paren_str = input("Enter a string with nested parentheses: ")
print(parse_nested_parens(paren_str))