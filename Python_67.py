```
def fruit_distribution(s,n):
    s = s.replace('apples', 'a').replace('oranges', 'o')
    return n - int(s.split()[2].replace('and', '').replace(' ', '')) - int(s.split()[4].replace('and', '').replace(' ', ''))