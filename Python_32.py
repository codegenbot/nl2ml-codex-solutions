def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    if n == 2:
        return -b / (2 * a)
    elif n == 4:
        D = b**2 - 4 * a * c
        x1 = (-b + math.sqrt(D)) / (2 * a)
        x2 = (-b - math.sqrt(D)) / (2 * a)
        if abs(poly(xs, x1)) < abs(poly(xs, x2)):
            return x1
        else:
            return x2