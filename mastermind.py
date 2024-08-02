def mastermind(code, guess):
    code = list(code)
    guess = list(guess)
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
            code[i] = "X"
            guess[i] = "X"

    for i in range(4):
        if guess[i] in code and code[i] != "X":
            white_pegs += 1
            code[code.index(guess[i])] = "X"

    return str(black_pegs) + "\n" + str(white_pegs)