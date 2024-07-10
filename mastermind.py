def mastermind(code, guess):
    black = sum(1 for i, (c1, c2) in enumerate(zip(code, guess)) if c1 == c2)
    white = len(guess) - black
    return str(white), str(black)