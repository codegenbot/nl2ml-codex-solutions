```
def prod_signs(arr):
    if len(arr) == 0:
        return None
    sign_product = 1
    for num in arr:
        if num != 0:
            sign_product *= -1 if num < 0 else 1
    return sum(abs(num) for num in arr) * sign_product