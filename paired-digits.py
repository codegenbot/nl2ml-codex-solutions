Here is a Python function that solves the problem:

def paired_digits(s):
    return sum(int(digit) for digit in s if s[s.index(digit)+1] == digit)