def solve_boolean(expression):
    result = True
    for char in expression:
        if char == 'T':
            pass
        elif char == 'F':
            return False
        elif char == '&':
            result = result and False
        elif char == '|':
            result = result or False
    return result