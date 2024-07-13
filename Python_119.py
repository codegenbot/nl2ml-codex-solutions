def match_parens(lst):
    result = []
    for s in lst:
        stack = []
        match = "Yes"
        for c in s:
            if c == "(":
                if not stack:
                    stack.append(c)
                else:
                    match = "No"
                    break
            elif c == ")":
                if len(stack) > 0:
                    stack.pop()
                else:
                    match = "No"
                    break
        result.append(match)
    return result