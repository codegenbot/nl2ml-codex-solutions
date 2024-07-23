def middle_character(s):
    length = len(s)
    return (
        s[length // 2 - (length % 2) : length // 2 + (length % 2)]
        if length % 2 == 0
        else s[length // 2]
    )