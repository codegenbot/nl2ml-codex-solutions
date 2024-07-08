def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    elif "&" in expression:
        parts = expression.split("&")
        return all(solve_boolean(part) for part in parts)
    elif "|":
        parts = expression.split("|")
        return any(solve_boolean(part.strip()) for part in parts)