def middle_character(s):
    s = s.strip()
    length = len(s)
    midpoint = length // 2
    if length % 2 == 0:
        return s[midpoint-1:midpoint]
    else:
        return s[midpoint]