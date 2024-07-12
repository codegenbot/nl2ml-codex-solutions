from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            current_group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                current_group += stack.pop()
            if not stack or stack[-1] != "(":
                result.append(current_group)
                current_group = ""
            else:
                stack.pop()
                current_group += char

    if stack:
        for _ in range(len(stack)):
            current_group += stack.pop()
        result.append(current_group)

    return [group.strip() for group in result]