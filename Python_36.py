
def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 11 == 0 or i % 13 == 0:
            if "7" in str(i) or "9" in str(i):
                count += 1
    return count
```
