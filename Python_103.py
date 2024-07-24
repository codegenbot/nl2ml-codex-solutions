def rounded_avg(n, m):
    if n > m:
        return -1
    avg = sum(range(n, m+1)) / (m-n+1)
    return bin(int(round(avg))).lstrip("0").lstrip("-") or "0"