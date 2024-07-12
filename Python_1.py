from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")":
            stack.pop()
            if not stack:
                result.append(current_group)
                current_group = ""
        elif not stack:
            current_group += char

    return result