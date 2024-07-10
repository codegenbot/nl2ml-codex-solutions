def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    code_guess_count = [0] * 6
    for i in range(4):
        if code[i] == guess[i]:
            black_pegs += 1
        else:
            code_guess_count[ord(guess[i]) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            continue
        elif code_guess_count[ord(guess[i]) - ord("B")] > 0:
            white_pegs += 1
            code_guess_count[ord(guess[i]) - ord("B")] -= 1

    return str(black_pegs), str(white_pegs)