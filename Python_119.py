def match_parens(s):
    stack = []
    for c in s:
        if c == "(":
            stack.append(c)
        elif c == ")":
            if len(stack) == 0:
                return "No"
            else:
                stack.pop()
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"