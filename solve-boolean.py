```
def solve(input_string):
    stack = []
    for char in input_string:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            b1 = stack.pop()
            b2 = stack.pop()
            stack.append(b1 or b2)
        elif char == '&':
            b1 = stack.pop()
            b2 = stack.pop()
            stack.append(b1 and b2)
    return stack[0]