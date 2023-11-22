def mastermind(code: str, guess: str) -> tuple:
    black_pegs = 0
    white_pegs = 0
    
    code_freq = collections.Counter(code)
    guess_freq = collections.Counter(guess)
    
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
            code_freq[code[i]] -= 1
            guess_freq[guess[i]] -= 1
    
    for color in guess_freq:
        white_pegs += min(code_freq[color], guess_freq[color])
    
    return white_pegs, black_pegs