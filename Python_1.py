from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.strip()
    result = []
    stack = []
    groups = ""

    for c in paren_string:
        if c == " ":
            continue
        if c == "(":
            stack.append(c)
            groups += c
        elif c == ")":
            if stack:
                stack.pop()
                groups += c
                if not stack:
                    result.append(groups + " ")
                    groups = ""
            else:
                return []
        elif c == "(" and not stack:
            return []

    if stack:
        return []
    if groups:
        result.append(groups)

    if not stack and len(result) == 0:
        return ["Error: No parentheses found"]

    return [g.strip() for g in result]