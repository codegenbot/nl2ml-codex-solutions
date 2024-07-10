def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1

    for i in range(4):
        if code[i] == guess[i]:
            code_count[ord(guess[i]) - ord("B")] -= 1
            black_pegs += 1
        elif code_count[ord(guess[i]) - ord("B")] > 0:
            white_pegs += 1
            code_count[ord(guess[i]) - ord("B")] -= 1

    return str(black_pegs), str(white_pegs)