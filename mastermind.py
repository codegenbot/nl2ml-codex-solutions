def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        elif str(code[i]) in str(guess):
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)