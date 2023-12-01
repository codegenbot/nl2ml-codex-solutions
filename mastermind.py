def mastermind(code, guess):
    black_pegs = 0
    white_pegs = 0
    code_counts = collections.Counter(code)
    guess_counts = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
    
    for color in code_counts:
        white_pegs += min(code_counts[color], guess_counts[color])
    
    white_pegs -= black_pegs
    
    return white_pegs, black_pegs

code = input()
guess = input()
result = mastermind(code, guess)
print(result[0])
print(result[1])