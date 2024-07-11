def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    precedence = {"&": 1, "|": 0}

    if expression == "t":
        return True
    elif expression == "f":
        return False

    stack = []
    for char in expression:
        if char in ["T", "F"]:
            stack.append(bool(char == "T"))
        elif char == "(":
            stack.append("(")
        elif char == ")":
            while stack and stack[-1] != "(":
                b = stack.pop()
                a = stack.pop()
                stack.append(operations["|"](a, b))
        elif char in operations:
            while len(stack) > 0 and stack[-1] not in ["(", "|", "&"]:
                if precedence[char] < precedence.get(stack[-1], 2):
                    stack.append(char)
                    break
                while stack and stack[-1] != "(":
                    stack.pop()
            if stack and stack[-1] == "(":
                stack.pop()

    return stack[0]