from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == "(":
            level += 1
            result.append(level)
        elif char == ")":
            level -= 1
            result.append(level)
    return [i for i in result if i > 0]