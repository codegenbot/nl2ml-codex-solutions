def middle_character(s):
    length = len(s)
    if length % 2 == 1:
        return s[length // 2]
    else:
        return s[(length - 1) // 2: (length + 1) // 2]