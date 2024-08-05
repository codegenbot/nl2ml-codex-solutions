Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return bool(int(a)) and bool(int(b))
    else:
        a, b = expression.split('|')
        return bool(int(a)) or bool(int(b))