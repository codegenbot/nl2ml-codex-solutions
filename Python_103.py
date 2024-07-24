import math


def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    return bin(int(round(avg))).replace("-", "").lstrip("0") or "0"