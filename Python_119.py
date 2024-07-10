def match_parens(lst):
    for s in lst:
        open_count = 0
        for char in s:
            if char == "(":
                open_count += 1
            elif char == ")":
                if open_count <= 0:
                    return "No"
                open_count -= 1
        if open_count < 0:
            return "No"
    return "No" if open_count != 0 else "Yes"