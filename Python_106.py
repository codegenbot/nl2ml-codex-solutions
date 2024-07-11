```
def f(n):
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            result.append(factorial(i))
        else:
            result.append(sum(range(1, i+1)))
    return result

def factorial(x):
    res = 1
    for i in range(1, x+1):
        res *= i
    return res