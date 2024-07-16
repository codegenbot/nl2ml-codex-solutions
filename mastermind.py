def mastermind(code, guess):
    black = 0
    white = 0

    for i in range(4):
        if guess[i] == code[i]:
            black += 1
        elif code.count(guess[i]) > 0:
            white += 1

    return str(black) + "\n" + str(white)