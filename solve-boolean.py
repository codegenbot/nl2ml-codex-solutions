```
def solveBoolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid Expression")
    result = True
    for char in expression:
        if char == '&':
            result &= (expression[expression.index(char) - 1] == 'T')
        elif char == '|':
            result |= (expression[expression.index(char) - 1] == 'T')
    return result