def is_nested(string):
    stack = []
    for char in string:
        if char == '[':
            stack.append(char)
        elif char == ']' and stack:
            stack.pop()
    return len(stack) < 2 and len(stack) > 0