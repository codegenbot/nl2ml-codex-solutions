def sort_third(input_list):
    return sorted(input_list, key=lambda x: (int(str(x)[2]) if len(str(x)) >= 3 else x) if isinstance(x, int) else int(str(x)[0]) )