```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            stack.pop()
            group += char
            if not stack:
                groups.append(group)
                group = ''

    return [g for g in groups if g.count('(') == g.count(')')]