from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0

    for char in paren_string:
        if char == "(":
            current_depth += 1
            depths.append(current_depth)  # Append current_depth before increasing
        elif char == ")":
            current_depth -= 1
            depths.append(current_depth)  # Append current_depth after decreasing

    return depths