Here is the completed code:

def mastermind(code, guess):
    black = 0
    white = 0
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif guess.count(guess[i]) > 0:
            white += 1
    return str(black) + '\n' + str(white)