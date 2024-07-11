```
def solve(expression):
    expression = expression.upper()
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve(left) and solve(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve(left) or solve(right)

expression = input()
print("Result:", "True" if evaluate(expression) else "False")