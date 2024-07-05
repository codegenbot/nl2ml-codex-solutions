def basement(arr):
    total = 0
    for i, x in enumerate(arr):
        total += x
        if total < 0:
            return i + 1
        total = 0  
    return -1