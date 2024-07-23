from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        
        if char in ['(', ')']:
            if char == '(':
                temp += char
            elif temp and (temp[-1] != '(' or temp[-1] != ')'):
                result.append(temp)
                temp = ''
            else:
                temp += char
                
    if temp:
        result.append(temp)

    return result