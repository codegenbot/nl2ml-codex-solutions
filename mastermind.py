def mastermind(code, guess):
    white = 0
    black = 0
    code_chars = [c for c in code]
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
            code_chars[i] = ""
    for c in code_chars:
        if c in guess and c != "":
            white += 1
    return str(black) + "\n" + str(white)