def middle_character(s):
    length = len(s)
    if length % 2 != 0:
        return s[length // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1].lstrip('][')[:-1].replace('\'', '')