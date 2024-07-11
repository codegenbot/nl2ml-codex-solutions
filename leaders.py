def leaders(input):
    result = []
    max_right = input[-1]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_right:
            result.append(str(input[i]))
            max_right = input[i]
    return ' '.join(reversed(result))