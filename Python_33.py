def sort_third(l: list):
    return [value for i in range(0, len(l), 3) for value in sorted(l[i:i+3])].