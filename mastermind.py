import re


def mastermind(code, guess):
    # Initialize variables to keep track of white and black pegs
    white_pegs = 0
    black_pegs = 0

    # Check that the input strings are valid
    if not re.match("[0-5]{4}", code) or not re.match("[0-5]{4}", guess):
        return ("Invalid input", "Invalid input")

    # Iterate through each character in the code and guess
    for i in range(len(code)):
        if code[i] == guess[i]:
            black_pegs += 1
        elif code[i] in guess:
            white_pegs += 1

    # Return the number of white and black pegs
    return (white_pegs, black_pegs)