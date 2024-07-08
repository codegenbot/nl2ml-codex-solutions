```
def mastermind(code, guess):
    count_black = 0
    count_white = 0
    
    for i in range(4):
        if guess[i] == code[i]:
            count_black += 1
        elif str(guess[i]) in str(code):
            count_white += 1
            
    return count_black, count_white