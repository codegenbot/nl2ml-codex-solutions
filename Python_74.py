```
def total_match(lst1, lst2):
    return min([lst for lst in [lst1, lst2] if sum(len(s) for s in lst) < sum(len(s) for s in other)] or [lst1], key=lambda x:sum(len(s) for s in x))