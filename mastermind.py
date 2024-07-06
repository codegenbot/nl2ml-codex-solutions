def mastermind(code, guess):
    black = 0
    white = 0
    code_count = [0]*6
    guess_count = [0]*6
    for i in range(4):
        if code[i] == guess[i]:
            black += 1
        else:
            code_char = code[i]
            guess_char = guess[i]
            code_count[ord(code_char)-55]++;
            guess_count[ord(guess_char)-55]++;
    for i in range(6):
        white += min(code_count[i], guess_count[i])
    return black, white