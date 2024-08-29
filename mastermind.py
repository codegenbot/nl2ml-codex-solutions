def mastermind(code, guess):
    white = 0
    black = 0
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        elif code_count[ord(guess[i]) - ord("A")] > 0:
            white += 1
            code_count[ord(guess[i]) - ord("A")] -= 1

    return str(black) + "\n" + str(white)