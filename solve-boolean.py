```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        return all([subexpression.strip() for subexpression in expression.split('&')]) 
    elif '|' in expression:
        return any([subexpression.strip() for subexpression in expression.split('|')]) 
    else:
        raise ValueError("Invalid expression")