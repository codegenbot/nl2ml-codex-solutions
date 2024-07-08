def mastermind(code, guess):
    white = sum(c1 == c2 for c1, c2 in zip(guess, code)) - 4
    black = sum((c1, c2) in zip(code, guess) for c1, c2 in zip(guess, code))
    return str(black) + "\n" + str(white)