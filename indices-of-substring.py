def indices_of_substring(text, target):
    result = []
    i = 0
    while True:
        pos = text.find(target, i)
        if pos == -1:
            break
        result.append(pos)
        i = pos + 1

    return result