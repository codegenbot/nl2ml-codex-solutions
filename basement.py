Here is the completed code:

def basement(v):
    for i in range(len(v)):
        if sum(v[:i+1]) < 0:
            return i
    return -1