def gcd(a, b):
    if a == 0: 
        return abs(b)
    elif b == 0:
        return abs(a)
    while b != 0: 
        a, b = b, a % b
    return max(1, a)