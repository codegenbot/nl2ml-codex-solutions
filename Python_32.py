```python
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = xs[-1]
    
    if c == 0 or b == 0:
        return None
    
    return -b / (2 * c)

xs = input("Enter the list of coefficients: ")
xs = [float(x) for x in xs.split()]

try:
    print(find_zero(xs))
except ValueError as e:
    print(e)