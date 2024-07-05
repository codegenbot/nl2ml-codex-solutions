def mastermind(code, guess):
    code_count = [0] * 6
    for c in code:
        code_count[ord(c) - 65] += 1

    black_pegs = sum(
        [
            min(count, guess.count(c)) if count else 0
            for c, count in zip(map(chr, range(65, 71)), code_count)
        ]
    )

    white_pegs = len(guess) - black_pegs
    return str(white_pegs), str(black_pegs)