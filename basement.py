Here is the solution:

def basement(vector):
    total = 0
    for i in range(len(vector)):
        if total < 0:
            return i
        total += vector[i]
    return -1