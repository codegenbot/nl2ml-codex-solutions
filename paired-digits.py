def paired_digits(s):
    return sum(int(d1) for i, d1 in enumerate(s) if d1 == s[i+1] if i < len(s)-1)