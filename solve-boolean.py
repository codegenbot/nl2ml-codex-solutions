def solve_boolean(expression):
    return eval(expression.replace('&', ' and ').replace('|', ' or '))