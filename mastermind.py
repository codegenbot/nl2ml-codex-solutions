def mastermind(code, guess):
    white = 0
    black = 0

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess.count(guess[i]) and code.count(guess[i]):
            white += 1

    return str(black) + "\n" + str(white)