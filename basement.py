```
def basement(arr):
    for i in range(len(arr)):
        if sum(arr[:i+1]) < 0:
            return i + 1
    return -1