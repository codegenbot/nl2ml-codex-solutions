def cycpattern_check(a, b):
    return any(b in a[i:] + a[:i] for i in range(len(a))) or (len(a) == len(b) and a == b * 2)