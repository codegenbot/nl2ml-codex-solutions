```
def count_upper(s):
    return sum(1 for i, c in enumerate(s) if 'AEIOU'.__contains__(c.upper()) and i % 2 == 0)