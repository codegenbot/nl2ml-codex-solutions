```python
def sort_third(l: list):
    return [min([x for x in l if (i - l.index(x)) % 3 == 0]) 
            if i % 3 != 0 else 
            sorted([x for x in l if (i - l.index(x)) % 3 != 0])[0] 
            for i, _ in enumerate(l)]