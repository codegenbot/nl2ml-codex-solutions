def paired_digits(s):
    return sum(int(digit) for i, digit in enumerate(s) if (i < len(s) - 1 and s[i] == s[i+1]))