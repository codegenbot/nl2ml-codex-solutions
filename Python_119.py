def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0 or stack[-1] != '(':
                    return 'No'
                stack.pop()
    if len(stack) == 0:
        return 'Yes'
    return 'No'