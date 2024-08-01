from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    curr_depth = 0
    for char in paren_string:
        if char == "(":
            curr_depth += 1
            depths.append(curr_depth)
        elif char == ")":
            curr_depth -= 1
    return [
        max(depths[i:j])
        for i, j in zip(range(0, len(depths), 2), range(1, len(depths) + 1, 2))
    ]