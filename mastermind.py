def mastermind(code, guess):
    black_pegs = sum(c1 == c2 for c1, c2 in zip(code, guess))
    white_pegs = len(set(guess) & set(code)) - black_pegs
    return str(black_pegs) + "\n" + str(4 - black_pegs - white_pegs)