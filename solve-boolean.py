```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)

print(solve_boolean('T'))  # True
print(solve_boolean('F'))  # False
print(solve_boolean('f&f'))  # False
print(solve_boolean('f&t'))  # False
print(solve_boolean('t&f'))  # False