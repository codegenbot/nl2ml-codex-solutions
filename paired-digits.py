
def paired_digits(s):
    return sum(int(c) for c in s if s[s.index(c) + 1] == c and s.index(c) < len(s) - 1)