def paired_digits(s):
    return sum(
        int(digit)
        for digit in s
        if s.index(digit) * 2 < len(s) and s[s.index(digit) + 1] == digit
    )