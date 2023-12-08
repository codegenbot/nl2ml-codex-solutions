import collections
def mastermind(code, guess):
    black_pegs = sum(c == g for c, g in zip(code, guess))
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    white_pegs = sum(min(code_counts[char], guess_counts[char]) for char in code_counts) - black_pegs
    return white_pegs, black_pegs