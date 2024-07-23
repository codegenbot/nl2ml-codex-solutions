def mastermind(code, guess):
    code_chars = [char for char in code]
    guess_chars = [char for char in guess]
    white_pegs = sum(
        1 for c in guess_chars if c in code_chars and c != code[code_chars.index(c)]
    )
    black_pegs = sum(1 for i, j in zip(code, guess) if i == j)
    return str(black_pegs) + "\n" + str(white_pegs)