from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    depth = 0
    for char in paren_string:
        if char == "(":
            if depth > 0:
                current_group += char
            depth += 1
        elif char == ")":
            if depth == 0:
                return ["Invalid input: Unmatched closing parenthesis"]
            depth -= 1
            if depth > 0:
                current_group += char
            if depth == 0:
                result.append(current_group)
                current_group = ""

    if depth > 0:
        return ["Invalid input: Unmatched opening parenthesis"]
    if depth < 0:
        return ["Invalid input: Unmatched closing parenthesis"]

    return result

paren_string = input()
output = separate_paren_groups(paren_string)
print(output)