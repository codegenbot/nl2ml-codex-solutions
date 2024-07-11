```
def compare_one(a, b):
    if isinstance(a, str) and isinstance(b, (int, float)):
        a = str(a).replace('.', '').replace(',', '.').format('{0:.1f}')
    elif isinstance(b, str) and isinstance(a, (int, float)):
        b = str(b).replace('.', '').replace(',', '.').format('{0:.1f}')

    if a > b:
        return a
    elif a < b:
        return b
    else:
        return None