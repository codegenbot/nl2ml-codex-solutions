def fruit_distribution(s,n):
    s = s.replace(" apples and ", " ").replace(" oranges", "")
    return n - int(''.join(filter(str.isdigit, s)).split()[0]) - 1