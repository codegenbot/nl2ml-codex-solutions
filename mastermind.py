def mastermind(code, guess):
    code_count = [0] * 6
    for char in code:
        code_count[ord(char) - ord("A")] += 1

    white_pegs = sum(
        min(count, guess.count(char)) for count, char in zip(code_count, "ABCDEF")
    )
    black_pegs = sum(a == b and c > 0 for a, b, c in zip(code, guess, code_count))

    return str(4 - white_pegs), str(black_pegs)