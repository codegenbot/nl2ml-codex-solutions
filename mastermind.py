def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = len([c for c1, c in zip(code, guess) if c1 == c and code.index(c) != guess.index(c)])
    return str(black_pegs) + "\n" + str(white_pegs)