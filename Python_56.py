def correct_bracketing(brackets: str):
    stack = []
    for bracket in brackets:
        if bracket == "<":
            stack.append(bracket)
        elif bracket == ">" and stack:
            stack.pop()
        else:
            return False
    return len(stack) == 0