def mastermind(code, guess):
    white_pegs = 0
    black_pegs = 0

    for i in range(4):
        if guess[i] == code[i]:
            black_pegs += 1
        elif code[i] in set(guess):
            white_pegs += 1

    return str(black_pegs) + "\n" + str(white_pegs)

if __name__ == "__main__":
    code = "abcD"
    guess = "abcd"
    result = mastermind(code, guess)
    print(result)