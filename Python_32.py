def find_zero(xs: list) -> float:
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a