Problem: Find Zero
Find a zero of a quadratic equation given its coefficients.

Function signature:
def find_zero(xs: list) -> float:

def find_zero(xs: list):
    n = len(xs)
    assert n % 2 == 0, "xs must have even number of coefficients"
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 2 else None
    d = xs[3] if n > 3 else None

    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a) if c is not None else -b / (2*a)
    return round(x, 2)