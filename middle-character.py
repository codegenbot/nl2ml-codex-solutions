def middle_character(s):
    if len(s) % 2 == 1:
        return s[len(s)//2]
    elif len(s) % 2 == 0:
        return s[(len(s)-1)//2:(len(s)+1)//2]