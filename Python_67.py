def fruit_distribution(s, n):
    s = (
        s.replace("apples and", "apples")
        .replace("oranges", "oranges ")
        .replace("mangoes", "mangoes ")
    )
    n = int(n)
    return n - int(s.split()[0].split(" ")[0]) - int(s.split()[2].split(" ")[1])