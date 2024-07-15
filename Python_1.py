from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    count = 0
    for char in paren_string:
        if char == "(":
            if count > 0:
                current_group += char
            count += 1
        elif char == ")":
            count -= 1
            if count > 0:
                current_group += char
            if count == 0:
                result.append(current_group)
                current_group = ""
    if count > 0:
        result.append(current_group)
    return result