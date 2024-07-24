```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            stack.pop()
        else:
            continue
        max_level = len(stack)
        result.append(max_level)
    return result