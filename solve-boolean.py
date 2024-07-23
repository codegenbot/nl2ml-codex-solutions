```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False

    while "|" in expression or "&" in expression:
        if "&" in expression:
            left, right = expression.split("&")
            if "|" in left:
                left = "(" + str(solve_boolean(left)) + ")"
            if "|" in right:
                right = "(" + str(solve_boolean(right)) + ")"
            expression = f"{left} & {right}"
        elif "|" in expression:
            left, right = expression.split("|")
            if "&" in left:
                left = "(" + str(solve_boolean(left)) + ")"
            if "&" in right:
                right = "(" + str(solve_boolean(right)) + ")"
            expression = f"{left} | {right}"

    return eval(f"bool({expression})")