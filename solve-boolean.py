import ast

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    while ' && ' in expression or ' || ' in expression:
        if ' && ' in expression:
            left, right = expression.split(' && ')
            expression = f"({str(bool(solve_boolean(left)))} and {str(bool(solveBoolean(right))))}"
        elif ' || ' in expression:
            left, right = expression.split(' || ')
            expression = f"({str(bool(solveBoolean(left)))} or {str(bool(solveBoolean(right)))))"

    return ast.literal_eval(f"{expression}")