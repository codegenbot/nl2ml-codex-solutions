def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack:
                stack.pop()
            else:
                result.append(1)
        elif stack:
            level = len(stack)
            result.append(level)
            while stack and stack[-1] != '(':
                stack.pop()
            stack.pop()
    return result