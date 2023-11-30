import sys
from typing import List

def parse_nested_parens(inputs: List[str]) -> List[int]:
    result = []
    for paren_string in inputs:
        if not paren_string:
            result.append(-1)
            continue

        stack = []
        max_depth = 0
        current_depth = 0
        for char in paren_string:
            if char == "(":
                stack.append(char)
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ")":
                if stack:
                    stack.pop()
                    current_depth -= 1
        if stack:
            result.append(-1)
        else:
            result.append(max_depth)
    return result

inputs = [sys.stdin.readline().strip() for _ in range(int(sys.stdin.readline().strip()))]
result = parse_nested_parens(inputs)
print(result)