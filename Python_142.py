````
def sum_squares(lst):
    total = 0
    for num in lst:
        if (num % 3 == 0 and num % 4 != 0) or (num % 4 == 0 and num % 3 != 0):
            total += num ** (2 if num % 4 == 0 else 3)
    return total
```