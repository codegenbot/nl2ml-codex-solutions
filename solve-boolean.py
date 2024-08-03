def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return not bool(left) and not bool(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(left) or bool(right)