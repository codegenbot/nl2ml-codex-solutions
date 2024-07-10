Here is the solution:

def mastermind(code, guess):
    code_counts = [0]*6
    for c in code:
        code_counts[ord(c)-65] += 1
    
    white_pegs = sum(min(count, guess.count(c)) for count, c in zip(code_counts, 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'))
    
    black_pegs = sum(1 for i, c in enumerate(guess) if c == code[i])
    
    return str(black_pegs) + '\n' + str(4 - black_pegs)