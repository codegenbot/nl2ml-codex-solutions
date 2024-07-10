from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            current_group = ""
        elif char == ")":
            result.append(current_group)
        else:
            current_group += char
    return result