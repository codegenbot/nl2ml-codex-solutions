def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    result = None
    while '&&' in expression or '||' in expression:
        if '&&' in expression:
            left, right = expression.split('&&')
            expression = str(bool(solve_boolean(left)) and bool(solveBoolean(right)))
        elif '||' in expression:
            left, right = expression.split('||')
            expression = str(bool(solve_boolean(left)) or bool(solveBoolean(right)))

    return eval(expression)