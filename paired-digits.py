def paired_digits(s):
    return sum(int(d) for d in s if d == s[s.index(d) + 1] or s.index(d) + 1 == len(s))