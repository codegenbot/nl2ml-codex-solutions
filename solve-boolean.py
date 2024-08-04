def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True if expression[0] == 'T' else False
        for i in range(1, len(expression)):
            if expression[i] == '&':
                result = result and (expression[i+1] == 'T')
            elif expression[i] == '|':
                result = result or (expression[i+1] == 'T')
    return result