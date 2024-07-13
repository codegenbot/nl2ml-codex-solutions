def mastermind(code, guess):
    white = 0
    black = 0
    code_chars = [char for char in code]
    guess_chars = [char for char in guess]

    for i in range(4):
        if code_chars[i] == guess_chars[i]:
            black += 1
            code_chars[i] = ""
            guess_chars[i] = ""
        elif guess_chars[i] in code_chars:
            white += 1
            code_chars[code_chars.index(guess_chars[i])] = ""

    return str(white) + "\n" + str(black)