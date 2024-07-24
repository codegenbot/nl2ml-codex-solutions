def mastermind(code, guess):
    count_black = 0
    count_white = 0

    for i in range(4):
        if code[i] == guess[i]:
            count_black += 1
        elif code.count(guess[i]) > 0:
            count_white += 1

    return str(count_black), str(count_white)