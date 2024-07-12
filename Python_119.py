def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == "(":
                stack.append(char)
            elif char == ")":
                if not stack:
                    return False
                stack.pop()
    return not stack