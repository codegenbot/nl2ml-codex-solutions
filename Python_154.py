```
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a) - len(b) + 1):
        if a[i:i+len(b)].lower() == b.lower():
            return True
    return False