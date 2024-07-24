```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return bool(left) and solve_boolean(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return bool(left) or solve_boolean(right)