def sort_third(l: list):
    l_copy = l.copy()
    for i in range(0, len(l_copy) - 2, 3):
        l_copy[i : i + 3] = sorted(l_copy[i : i + 3])
    return l_copy