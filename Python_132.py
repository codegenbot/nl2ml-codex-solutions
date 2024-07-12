def is_nested(string):
    stack = []
    for char in string:
        if char == '[':
            stack.append(char)
        elif char == ']' and stack and stack[-1] == '[':
            stack.pop()
    return len(stack) < len(string) and len(stack) > 0