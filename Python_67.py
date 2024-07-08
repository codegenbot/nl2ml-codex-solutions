```
def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    if "oranges" in s:
        apple_count = int(s.replace("apples ", "").split()[0])
        return n - apple_count - 1
    else:
        return n - int(''.join(filter(str.isdigit, s))) - 1