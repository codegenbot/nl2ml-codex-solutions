def match_parens(lst):
    for s in lst:
        stack = [0]  
        match = "Yes"
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if len(stack) == 1:  
                    stack.pop()
                else:
                    match = "No"
                    break
        if len(stack) > 0:
            match = "No"
        print(match)