def compare_one(a, b):
    if type(a) == type(b):
        if a == b:
            return None
        elif a > b:
            return a
        else:
            return b
    else:
        if str(a) == str(b):
            return None
        elif str(a) > str(b):
            return a
        else:
            return b