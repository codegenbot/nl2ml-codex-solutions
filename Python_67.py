def fruit_distribution(s, n):
    s = s.replace("apples", "a").replace("oranges", "o")
    return n - int(s.split()[2].split(" ")[0])