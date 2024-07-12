```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if float(a.replace(',', '.')) >= b else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if float(b.replace(',', '.')) >= a else a
    elif isinstance(a, str) and isinstance(b, str):
        return a if float(a.replace(',', '.')) >= float(b.replace(',', '.')) else b
    else:
        return None if a == b else a if a > b else b