```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        level = 0
        max_level = 0
        for char in group:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            max_level = max(max_level, level)
        result.append(max_level + 1)
    return [i if i > 0 else -i for i in result]