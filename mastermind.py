def mastermind(code, guess):
    white = sum([1 for c in zip(code, guess) if c[0] == c[1]])
    black = 4 - sum([c.count(c2) for c2 in set(guess)])
    return str(white), str(black)