def mastermind(code, guess):
    white = sum(c in code for c in guess)
    black = sum(code[i] == guess[i] for i in range(4))
    return str(black) + "\n" + str(white)