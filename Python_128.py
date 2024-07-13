```
def prod_signs(arr):
    if not arr:
        return None
    signs = [x//abs(x) for x in arr]
    product = 1
    for sign in signs:
        product *= sign
    return sum(abs(x) for x in arr) * product