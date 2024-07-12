from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            stack.append("(")
            current_group += "("
        elif char == ")" and stack:
            stack.pop()
            current_group += ")"
            if not stack:
                result.append(current_group)
                current_group = ""

    return result