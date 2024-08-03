from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0
    for char in paren_string:
        temp += char
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
            if count == 0:
                result.append(temp)
                temp = ""
                count = 1  # Reset the count to 1
    return result