def paired_digits(s):
    return sum(int(d) for i, d in enumerate(s) if i > 0 and s[i] == s[i-1])