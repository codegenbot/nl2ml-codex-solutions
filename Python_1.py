from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            while stack and stack[-1] != "(":
                temp += stack.pop()
            if stack:
                temp += "("
                stack.pop()
            else:
                result.append(temp)
                temp = ""

    if temp:
        result.append(temp)

    return [
        temp + stack.pop() * (stack.count("(") - 1)
        for stack in ([],) + list(zip(*[iter(stack)] * 2))
    ][0].split(")(")[1:-1]