def digits(n):
    if n < 0:
        return 0
    else:
        max_digit = max(map(int, str(abs(n))))
        return max_digit