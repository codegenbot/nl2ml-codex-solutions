def paired_digits(s):
    return sum(int(digit) for digit in s if s.index(str(int(digit))+1::) > 0 and s[s.index(str(int(digit))+1::)].index(digit) == 0)