````` 
def double_the_difference(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return abs(odd_sum - min([i for i in lst if isinstance(i, int)])) * 2
```
```