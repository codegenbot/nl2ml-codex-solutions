```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_level = 0
    for char in paren_string:
        if char == '(':
            stack.append(char)
            max_level += 1
        elif char == ')':
            stack.pop()
            max_level -= 1
    result.append(max_level)
    return [x + 1 for x in result]