def sort_third(l: list):
    return [sorted(l[i:i+3]) for i in range(0, len(l), 3) for i in range(i, min(i+3, len(l))]