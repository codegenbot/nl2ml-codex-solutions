def fruit_distribution(s, n):
    s = s.lower().split()
    n_apples = int("".join(filter(str.isdigit, [x for x in s if "apples" in x])))
    return n - n_apples