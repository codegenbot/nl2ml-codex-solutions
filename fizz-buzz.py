```
def fizz_buzz(x):
    if x % 3 == 0 and x % 5 == 0:
        return str(x)
    elif x % 3 == 0:
        return "Fizz"
    elif x % 5 == 0:
        return "Buzz"
    else:
        return str(x)
```