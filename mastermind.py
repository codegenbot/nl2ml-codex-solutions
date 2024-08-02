def mastermind(code, guess):
    white = sum(c in guess for c in set(guess))
    black = sum(
        c1 == c2 and i1 != i2
        for ((i1, c1), (i2, c2)) in zip(enumerate(code), enumerate(guess))
    )
    return str(white) + "\n" + str(black)