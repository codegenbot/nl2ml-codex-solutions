def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == "T" else False
        for op, value in zip(["&", "|"], [expression[1:2], expression[3:]]):
            if op == "&":
                result = result and (value == "T")
            elif op == "|":
                result = result or (value == "T")
    return result