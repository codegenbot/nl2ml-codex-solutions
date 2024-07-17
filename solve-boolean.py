```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == '&':
                result &= bool(next(iter(expression)))
            elif char == '|':
                result |= bool(next(iter(expression)))
            elif char in ['T', 'F']:
                continue
            else:
                raise ValueError("Invalid character")
        return result