def solve_boolean(expression):
    boolean_map = {'T': True, 'F': False, '|': 'or', '&': 'and'}
    for key, value in boolean_map.items():
        if value in [True, False]:
            expression = expression.replace(key, str(value))
        else:
            expression = expression.replace(key, value)
    return eval(expression)