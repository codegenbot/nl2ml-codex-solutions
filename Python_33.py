```python
def sort_third(l: list):
    return [
        l[i] if i % 3 != 0 else min([x for x in l if (i - l.index(x)) % 3 != 0])
        for i in range(len(l))
    ]