from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ""

    for char in paren_string:
        if char == " ":
            continue
        elif char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            while stack and stack[-1] != "(":
                temp += stack.pop()
            if stack:
                temp += ")"
                stack.pop()
            else:
                result.append(temp)
                temp = ""

    if temp:
        result.append(temp)

    return [x.strip() for x in result]