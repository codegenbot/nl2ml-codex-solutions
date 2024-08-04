def mastermind(code, guess):
    white = 0
    black = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif str(code[i]) in str(guess) and str(guess[i]).count(str(code[i])) > 0:
            white += 1

    return "{}\n{}".format(white, black)