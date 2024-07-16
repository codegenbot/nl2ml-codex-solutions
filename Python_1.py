from typing import List
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        group += char
        if char == ")":
            result.append(group)
            group = ""
    return result