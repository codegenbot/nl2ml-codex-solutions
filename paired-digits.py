def paired_digits(s):
    return sum(int(c) for c in s if c == next(s)[0])