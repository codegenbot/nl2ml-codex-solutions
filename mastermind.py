def get_pegs(code, guess):
    black = 0
    white = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif str(code[i]) in str(guess):
            white += 1

    return str(black) + "\n" + str(white)