def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[length // 2 - length // 2 % 2 : length // 2 + length // 2 % 2]
    else:
        return s[length // 2]