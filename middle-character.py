def get_middle(s):
    if len(s) % 2 == 0:
        return s[::2]
    else:
        return repr(s[len(s) // 2])