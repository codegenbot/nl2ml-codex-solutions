```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(a.replace(',', '.')) > b else None
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(b.replace(',', '.')) > a else None
    elif isinstance(a, str):
        return a if a > str(b) else None
    elif isinstance(b, str):
        return b if b > str(a) else None
    else:
        return a if a > b else None if a == b else None