def mastermind(code, guess):
    code_counts = [0] * 6
    for char in code: code_counts[ord(char) - ord("A")] += 1
    guess_counts = [0] * 6
    for char in guess: guess_counts[ord(char) - ord("A")] += 1

    black_pegs = sum(c == g for c, g in zip(code, guess))
    white_pegs = sum(min(code_counts[i], guess_counts[i]) for i in range(6))

    return str(black_pegs) + " " + str(white_pegs)