def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a


if __name__ == "__main__":
    import doctest

    doctest.testmod()