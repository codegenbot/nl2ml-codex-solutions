```python
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    max_level = 0
    for char in paren_string:
        if char == '(':
            level += 1
            max_level = max(max_level, level)
        elif char == ')':
            level -= 1
        result.append(level)
    return result