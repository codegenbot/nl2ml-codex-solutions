code = input()
guess = input()

black_pegs = sum(c == g for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code) if c not in guess and c != g) - black_pegs

print(max(0, white_pegs), max(0, black_pegs))