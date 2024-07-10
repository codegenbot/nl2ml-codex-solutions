from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    if any(char not in ["(", ")"] for char in paren_string):
        return "Invalid nested parens string"
    for char in paren_string:
        if char == "(":
            current_depth += 1
        elif char == ")":
            current_depth -= 1
        if current_depth < 0:
            return "Invalid nested parens string"
        depths.append(current_depth)
    if current_depth != 0:
        return "Invalid nested parens string"
    return depths

input_string = input("Enter the nested parens string within quotes: ")
while not input_string or input_string[0] != '"' or input_string[-1] != '"':
    input_string = input("Please enter a valid nested parens string within quotes: ")
result = parse_nested_parens(input_string[1:-1])
print(result)