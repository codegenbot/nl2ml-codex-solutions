from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp = ""

    for char in paren_string:
        if char == " ":
            if temp:
                result.append(temp)
                temp = ""
        else:
            if char in ["(", ")"]:
                if char == "(":
                    stack.append(char)
                    temp += char
                elif char == ")":
                    if stack and stack[-1] == "(":
                        stack.pop()
                        temp += char
                    else:
                        temp += char
                        result.append(temp)
                        temp = ""
            else:
                temp += char

    if temp:
        result.append(temp)

    return [x for x in result]