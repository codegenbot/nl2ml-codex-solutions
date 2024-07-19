```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            groups.append('(')
        elif char == ')':
            stack.pop()
            groups.append(')')
        if not stack:
            result.append(''.join(groups))
            groups = []
    return result