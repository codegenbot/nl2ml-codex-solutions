Here is the solution:

def camel_case(s):
    return ''.join(word.capitalize() for word in s.split())