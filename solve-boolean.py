```python
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        result = True if expression[0] == 'T' else False
        for op, val in zip(['&', '|'], [expression.index(op) if op in expression else -1, expression.rindex(op) if op in expression else -1]):
            if op == '&':
                result = result and (val > 0)
            elif op == '|':
                result = result or (val > 0)
        return result