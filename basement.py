def basement(indexes):
    total = 0
    for i, x in enumerate(indexes):
        total += x
        if total < 0:
            return i
    return -1