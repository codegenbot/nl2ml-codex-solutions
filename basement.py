Here is the Python solution for the problem:

def basement(lst):
    total = 0
    for i in range(len(lst)):
        total += lst[i]
        if total < 0:
            return i