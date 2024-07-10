```
from typing import List

def separate_paren_groups(paren_string: str) -> list[str]:
    result = []
    stack = []
    groups = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            groups += char
        elif char == ')':
            if stack and stack.pop() == '(':
                groups += char
                if not stack:
                    result.append(groups.lstrip('(').rstrip(')'))
                    groups = ''
            else:
                return []
    elif stack: 
        return []  # Add this check for a closing parenthesis with no opening counterpart.
    return result