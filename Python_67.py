def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    s = s.replace("oranges", "")
    n -= int(s.split()[0].replace("apples", "")) + 1
    return n