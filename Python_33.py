def sort_third(l: list):
    remainder = (3 - len(l) % 3) % 3
    l += [float("inf")] * remainder
    tuples_list = [tuple(l[i: i + 3]) for i in range(0, len(l), 3)]
    
    return [
        sorted(sub_list, key=lambda x: x[2] if len(sub_list) >= 3 else float("inf"))
        for sub_list in tuples_list
    ]