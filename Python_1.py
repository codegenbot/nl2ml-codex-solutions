from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            if stack:
                current_group += char
            stack.append(char)
        elif char == ")":
            stack.pop()
            current_group += char
            if not stack:
                result.append(current_group)
                current_group = ""

    return result