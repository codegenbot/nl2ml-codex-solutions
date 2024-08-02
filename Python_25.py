```python
def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    while n > 1:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i * count)
    return factors