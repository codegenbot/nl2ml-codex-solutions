```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        return a if (('.' in a or ',' in a) and '.' in str(b)) else b
    elif isinstance(b, str) and isinstance(a, (int, float)):
        return b if (('.' in b or ',' in b) and '.' in str(a)) else a
    else:
        return max(a, b) if a != b else None