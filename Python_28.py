from typing import List


def concatenate(strings: List[str]) -> str:
    if isinstance(strings, list):
        return "".join(strings)
    elif strings:
        return str(strings)
    else:
        return "Error: Expected a list of strings"


if __name__ == "__main__":
    while True:
        strings = input("Enter the strings (comma separated): ")
        input_list = [s.strip() for s in strings.split(",")]
        if len(input_list) == 1:
            break
        else:
            print("Invalid input. Please enter a single list of strings.")
    print(concatenate([input_list]))