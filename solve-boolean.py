Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = eval(' '.join(map(lambda x: 'True' if x == 'T' else 'False', expression)))
        return result