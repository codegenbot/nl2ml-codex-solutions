from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(1)
        elif char == ")":
            if not stack:
                return []  # invalid input
            stack.pop()
    while stack:
        result.append(-stack.pop())
    return [x for x in reversed(result)]