def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if i+1 < len(s) and s[i+1] == digit)