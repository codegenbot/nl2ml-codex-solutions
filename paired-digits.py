```
def paired_digits(s):
    return sum(int(a) for a, b in zip(s, s[1: len(s)]) if a == b)