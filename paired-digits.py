def paired_digits(s):
    return sum(int(dig) for dig in s if s[s.index(dig)+1] == dig)