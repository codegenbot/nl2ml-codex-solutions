```
def sort_third(l: list):
    return sorted(l, key=lambda x: (x % 3, x))