def paired_digits(digits):
    return sum(
        int(d)
        for d in digits
        if d == next(iter(digits))
        for _ in range(len(digits) - 1)
    )