Here is the Python solution:

def basement(arr):
    for i in range(len(arr)):
        if sum(arr[:i+1]) < 0:
            return i
    return -1