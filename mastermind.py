def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif str(code[i]) in str(guess):
            white_pegs += 1

    return black_pegs, white_pegs