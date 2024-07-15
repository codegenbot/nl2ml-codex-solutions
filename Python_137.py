```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(a.replace(',', '.')) >= b else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(b.replace(',', '.')) >= a else a
    elif isinstance(a, str) and isinstance(b, str):
        return max([a, b], key=lambda x: float(x.replace(',', '.')))
    else:
        return None if a == b else max((a, b), key=type)