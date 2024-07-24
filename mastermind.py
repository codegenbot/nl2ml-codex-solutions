def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("B")] += 1
    white_pegs = sum(
        min(count, guess.count(c)) for count, c in zip(code_count, "BOYOG")
    )
    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])
    return str(4 - black_pegs), str(black_pegs)