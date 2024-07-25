```
from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


if __name__ == "__main__":
    strings = []
    while True:
        try:
            strings_num = int(input("Enter the number of strings (1-9): "))
            if 1 <= strings_num <= 9:
                break
            else:
                print("Error! Please enter a number between 1 and 9.")
        except ValueError:
            print("Error! Please enter a valid integer.")

    for i in range(strings_num):
        while True:
            try:
                s = input(f"Enter string {i+1}: ")
                if len(s) <= 80:  
                    strings.append(s)
                    break
                else:
                    print("Error! String length should be less than or equal to 80.")
            except ValueError:
                print("Error! Please enter a valid string.")

    if len(strings) != strings_num:
        print("Error! Program did not receive expected input.")
    else:
        result_string = concatenate(strings)
        print("You entered the following strings:")
        for i in range(len(strings)):
            print(f"String {i+1}: {strings[i]}")
        print("Concatenated output: ", result_string)