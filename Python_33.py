def sort_third(l: list):
    return [val if i % 3 != 0 else sorted([x for x in l[:i//3*3+(i+1)//3*3-1::-1 if x % 3 != 0]))[0] for i, val in enumerate(l)]