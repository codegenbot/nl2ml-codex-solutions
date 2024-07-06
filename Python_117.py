def select_words(s, n):
    if n <= 0:
        return []
    elif n == 1:
        return words[0]
    else:
        return list(filter(lambda x: all(c.islower() for c in x[1:]), words))