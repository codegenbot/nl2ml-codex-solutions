def mastermind(code, guess):
    code_chars = [c for c in code]
    guess_chars = [c for c in guess]
    black_pegs = sum(1 for a, b in zip(code_chars, guess_chars) if a == b)
    white_pegs = len([a for a, b in zip(code_chars, guess_chars) if a != b and a in guess])
    return str(white_pegs), str(black_pegs)