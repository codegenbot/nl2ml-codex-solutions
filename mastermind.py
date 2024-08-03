def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_count[ord(guess[i]) - ord("B")] += 1
    for i in range(4):
        if code[i] != guess[i] and code_count[ord(code[i]) - ord("B")] > 0:
            white += 1
            code_count[ord(code[i]) - ord("B")] -= 1
    return str(white) + "\n" + str(black)