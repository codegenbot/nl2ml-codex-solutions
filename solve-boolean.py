def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    def evaluate(tokens):
        if len(tokens) == 0:
            return eval(tokens[0])
        elif tokens[0] in ["and", "or"]:
            operator_ = tokens.pop(0)
            operand2 = evaluate(tokens)
            stack.append(lambda a: a and (a or operand2))
            return None
        else:
            stack.append(eval(tokens[0]))
            return None

    def solve(stack):
        while len(stack) > 1:
            operand2 = stack.pop()
            operator_ = stack.pop()
            result = operator_(result, operand2)
        return bool(result)

    stack = []
    tokens = expression.split("|")
    for token in tokens:
        evaluate(token.split())
    result = solve(stack)
    return result