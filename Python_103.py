```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = sum(range(n, m+1)) / len(range(n, m+1))
    return bin(int(round(avg))).lstrip('0').lstrip('-') or '0'