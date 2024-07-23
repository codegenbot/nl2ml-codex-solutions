def basement(vector):
    total = 0
    min_index = len(vector)
    for i, num in enumerate(vector):
        total += num
        if total < 0:
            min_index = i
            break
    return min_index if min_index != len(vector) else -1