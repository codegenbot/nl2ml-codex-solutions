from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
            depths.append(current_depth)
        elif char == ")" and current_depth > 0:
            current_depth -= 1

    if current_depth != 0:
        return []
    
    return depths