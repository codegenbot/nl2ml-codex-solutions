def middle_character(s):
    import re
    s = re.sub(r'\W+', '', s).strip()
    length = len(s)
    if length % 2 != 0:
        return s[length // 2]
    else:
        return s[length // 2 - 1:length // 2 + 1]