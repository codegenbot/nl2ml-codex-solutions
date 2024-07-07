def mastermind(code, guess):
    white_peg = 0
    black_peg = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_peg += 1
        elif code.count(guess[i]) > 0:
            white_peg += 1
            code = code.replace(guess[i], "", 1)

    return str(white_peg) + "\n" + str(black_peg)