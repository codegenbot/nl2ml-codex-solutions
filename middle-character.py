def middle_character(s):
    length = len(s)
    middle_index = length // 2
    return s[middle_index] if length % 2 else s[middle_index - 1 : middle_index + 1]