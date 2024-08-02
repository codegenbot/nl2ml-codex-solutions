def mastermind(code, guess):
    white = sum(c in guess for c in code)
    black = sum(1 for i in range(len(code)) if code[i] == guess[i])
    return str(black), str(white)