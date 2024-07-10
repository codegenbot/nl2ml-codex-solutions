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
                temp_str = ''
            else:
                stack.pop()
                temp_str += char
                result.append(temp_str)
                temp_str = ''

    return [temp_str] + result