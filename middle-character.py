def middle_character(string):
    length = len(string)
    if length % 2 == 1:
        return string[length // 2]
    else:
        return string[length // 2:length // 2 + 2]