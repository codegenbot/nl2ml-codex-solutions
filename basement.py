Here is the solution:

def basement(vector):
    for i in range(len(vector)):
        if sum(vector[:i+1]) < 0:
            return i