```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp_str += char
        elif char == ')':
            if not stack or stack[-1] != '(':
                return []
            stack.pop()
            temp_str += char
            if not stack:
                result.append(temp_str)
                temp_str = ''
    
    if stack and stack[0] == '(':
        return []
    if temp_str:
        result.append(temp_str)
    
    return result