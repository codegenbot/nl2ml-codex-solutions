```
def add_elements(arr, k):
    return sum(i for i in arr[:k] if 10 > len(str(abs(i))) or len(str(abs(i))) == 2)