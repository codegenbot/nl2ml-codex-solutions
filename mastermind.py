def mastermind(code, guess):
    white = sum(1 for c in zip(code, guess) if c[0] == c[1])
    black = sum(1 for c in zip(guess, [c for c in code if c in guess]) if c[0] == c[1])
    return str(black), str(4 - black + white)