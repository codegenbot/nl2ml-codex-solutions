```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = []
        max_level = 0
        level = 0
        for c in s:
            if c == '(':
                stack.append(c)
                level += 1
                max_level = max(max_level, level)
            elif c == ')':
                stack.pop()
                level -= 1
        result.append(max_level)
    return result