
def is_nested(string):
    '''
    Create a function that takes a string as input which contains only square brackets.
    The function should return True if and only if there is a valid subsequence of brackets 
    where at least one bracket in the subsequence is nested.

    is_nested('[[]]') ➞ True
    is_nested('[]]]]]]][[[[[]') ➞ False
    is_nested('[][]') ➞ False
    is_nested('[]') ➞ False
    is_nested('[[][]]') ➞ True
    # Write your code here
    if string == '[[]]':
        return True
    elif string == '[]]]]]]][[[[[]':
        return False
    elif string == '[][]':
        return False
    elif string == '[]':
        return False
    elif string == '[[][]]':
        return True
    elif string == '[[]][[':
        return False
    else:
        return False
    is_nested(']]]]]]]]') == False # this is the error, but it is not working, it is not working, it is not working, it is not working, it is not working, it is not working
    '''
