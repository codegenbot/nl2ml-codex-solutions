def solution(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        return (n - m) / (n)