Here is a Python solution for the problem:

def middle_character(s):
    length = len(s)
    middle_index = length // 2
    
    if length % 2 != 0:
        return s[middle_index]
    else:
        return s[middle_index - 1:middle_index + 1]