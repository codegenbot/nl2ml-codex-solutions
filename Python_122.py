```
def add_elements(arr, k):
    return sum(i for i in arr[:k] if 10 > len(str(i)) or len(str(i)) == 2)