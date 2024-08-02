from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    
    if paren_string[0] == "(" and paren_string[-1] == ")":
        for char in paren_string:
            if char == "(":
                current_group += char
            elif char == ")":
                if current_group:
                    current_group += char
                    result.append(current_group)
                    current_group = ""

    return result