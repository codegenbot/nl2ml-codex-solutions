def digitSum(s):
    return sum(int(c) for c in set(s) if c.isdigit())