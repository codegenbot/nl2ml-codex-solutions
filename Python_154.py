```python
def cycpattern_check(a, b):
    if len(b) > len(a):
        return False
    for i in range(len(a)):
        if (a[i:] + a[:i]).find(b) != -1:
            return True
    return False