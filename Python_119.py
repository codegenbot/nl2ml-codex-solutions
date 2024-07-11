def match_parens(lst):
    open_count = 0
    for s in lst:
        for char in s:
            if char == ")":
                if open_count <= 0:
                    return "No"
                open_count -= 1
            elif char == "(":
                open_count += 1
    return "Yes" if open_count == 0 else "No"