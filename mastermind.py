def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(c)) for c, count in zip("ABCDEF", code_count)
    )

    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])

    return str(black_pegs) + "\n" + str(4 - black_pegs)