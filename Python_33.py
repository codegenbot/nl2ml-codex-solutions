def sort_third(l: list):
    return [
        val if i % 3 != 0 else min([x for x in l[:i] + l[i+1:] if x % 3 == 0])
        for i, val in enumerate(l)
    ]