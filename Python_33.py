def sort_third(l: list):
    for i in range(0, len(l), 3):
        if i+2 < len(l):
            l[i:i+3] = sorted(l[i:i+3])
    return l