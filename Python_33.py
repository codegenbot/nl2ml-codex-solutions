def sort_third(l: list):
    for i in range(0, len(l) // 3 * 3, 3):
        l[i : i + 3] = sorted(l[i : i + 3])
    if len(l) % 3 != 0:
        l[-(len(l) % 3) :] = sorted(l[-(len(l) % 3) :])
    return l