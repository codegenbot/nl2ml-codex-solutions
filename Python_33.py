def sort_third(l: list):
    max_val = float('-inf')
    for val in l:
        if val % 3 == 0:
            max_val = val
            break
    return [val if i % 3 != 0 else max_val for i, val in enumerate(l)]