```python
def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        stack = []
        operators = []
        for char in expression:
            if char in ["&", "|"]:
                if stack:  
                    while operators and operators[-1] != "(":
                        op = operators.pop()
                        val2 = stack.pop()
                        val1 = stack.pop()
                        if op == "&":
                            stack.append(val1 and val2)
                        else:
                            stack.append(val1 or val2)
                    operators.append(char)
                else:  
                    expression = char + "".join(stack) 
                    stack.clear() 
            elif char == "(":
                operators.append(char)
            elif char in ["t", "f"]:
                stack.append(eval(char.lower() == 't'))
        while operators:
            op = operators.pop()
            val2 = stack.pop()
            val1 = stack.pop()
            if op == "&":
                stack.append(val1 and val2)
            else:
                stack.append(val1 or val2)
        return stack[0]