```


def find_zero(xs: list):
    n = len(xs) // 2
    return -xs[n-1] / xs[n]