def cycpattern_check(a, b):
    return b in a+a and len(a)==len(b) or b in a*2 and len(a)==len(b)