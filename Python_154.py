def cycpattern_check(a, b):
    return b in a + a or any(b in a[i : i + len(b)] for i in range(len(a)))