def compare_one(a, b):
    if isinstance(a, str):
        a = float(a.replace(",", ".").replace(".", ""))
    if isinstance(b, str):
        b = float(b.replace(",", ".").replace(".", ""))
    if a > b:
        return a
    elif b > a:
        return b
    else:
        return None