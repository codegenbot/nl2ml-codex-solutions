from typing import List
import re


def filter_by_substring():
    while True:
        try:
            input_str = input("Enter strings (comma-separated): ")
            strings = [s.strip() for s in input_str.split(",")]

            if not strings:
                print("Please provide some strings.")
                continue

            break
        except ValueError:
            print("Invalid input. Please try again.")

    while True:
        try:
            substring = input("Enter a substring: ")
            num_to_display = int(
                input(
                    "Enter the number of results to display (1-{}): ".format(
                        len(strings)
                    )
                )
            )
            if 1 <= num_to_display <= len(strings):
                break
            else:
                print("Please enter a number between 1 and {}".format(len(strings)))
        except ValueError:
            print("Invalid input. Please try again.")

    result = [s for s in strings if bool(re.compile(substring).search(s))]
    print(result[:num_to_display])


filter_by_substring()