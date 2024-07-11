```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    else:  
        left, right = expression.split("|", 1)
        if "(" in left or ")" in right:
            return solve_boolean("(" + expression + ")")  
        return solve_boolean(left) or solve_boolean(right)