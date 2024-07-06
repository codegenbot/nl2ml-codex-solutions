```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    for char in paren_string:
        if char == ' ':
            continue
        temp += char
        if set(temp) == {'('} or set(temp) == {')'}:
            result.append(temp)
            temp = ''
    return result