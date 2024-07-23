```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []  
    groups = paren_string.split()
    for i, group in enumerate(groups):
        level = 0
        max_level = 0
        for char in group:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            max_level = max(max_level, level)
        result.append(max_level)