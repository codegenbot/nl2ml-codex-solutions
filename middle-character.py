```
def middle_character(s):
    s = s.strip()
    if len(s) % 2 == 1:
        return s[len(s)//2]
    else:
        return s[len(s)//2-1:len(s)//2+1]