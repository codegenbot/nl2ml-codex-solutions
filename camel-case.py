def camel_case(s): 
    return s.split()[0] + ''.join(word.capitalize() for word in s.replace('-', ' ').split()[1:])