def middle_character(s):
    length = len(s)
    if length % 2 == 0:
        return s[length//2-1:length//2+1][1] + s[length//2-1:length//2+1][0]
    else:
        return s[length // 2]