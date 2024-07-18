code = input()
guess = input()

black_pegs = sum(c == g and code.index(c) == guess.index(g) for c, g in zip(code, guess))
white_pegs = sum(min(code.count(c), guess.count(c)) for c in set(code)) - black_pegs

print(white_pegs, black_pegs)