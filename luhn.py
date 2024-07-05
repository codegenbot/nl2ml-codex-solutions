
import numpy as np

def luhn_algorithm(digits):
    # double every other digit starting with the second digit
    doubled_digits = digits[::2] * 2
    
    # if any of the results are over 9, subtract 9 from them
    for i in range(len(doubled_digits)):
        if doubled_digits[i] > 9:
            doubled_digits[i] -= 9
    
    return sum(doubled_digits)

def main():
    while True:
        digits = [int(x) for x in input("Enter a vector of 16 digits: ").split()]
        if len(digits) != 16:
            print("Invalid input. Please enter exactly 16 digits.")
            continue
        result = luhn_algorithm(digits)
        print(f"The sum of the new digits is {result}.")
        break

if __name__ == "__main__":
    main()