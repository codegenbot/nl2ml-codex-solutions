Here is the solution:

def basement(input_list):
    for i in range(len(input_list)):
        total = sum(input_list[:i+1])
        if total < 0:
            return i