def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    else:  
        return expression == "T"