def cycpattern_check(a, b):
    return len(a) == len(b) and b in (a + a)[:-1] and a in (b + b)[:-1]