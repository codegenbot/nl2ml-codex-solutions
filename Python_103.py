def rounded_avg(n, m):
    if n > m:
        return -1
    avg = round((n + m) / 2.0)
    return bin(int(str(avg)))[2:]