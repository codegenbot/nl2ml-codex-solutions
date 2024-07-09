from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(" and temp:
            result.append(temp)
            temp = "("
        elif char == "(":
            temp += "("
        elif char == ")":
            temp += ")"
            result.append(temp)
            temp = ""
        else:
            temp += char

    if temp:
        result.append(temp)
        
    return result