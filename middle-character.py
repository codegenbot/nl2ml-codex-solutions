def middle_character(s):
    s = s.strip()
    length = len(s)
    if length % 2 == 1:
        return s[length // 2]
    else:
        return s[length // 2 - 1 : length // 2 + 1]