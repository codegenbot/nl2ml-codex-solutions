from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char == '(':
            current_depth += 1
            depths.append(current_depth)
        elif char == ')':
            current_depth -= 1
            depths.append(current_depth)
    return depths

input_string = input("Enter the string of nested parentheses: ")
result = parse_nested_parens(input_string)
print(result)