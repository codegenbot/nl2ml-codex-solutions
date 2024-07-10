```
from typing import List
import re


def filter_by_substring():
    while True:
        try:
            input_str = input("Enter strings (comma-separated): ")
            substring = input("Enter a substring: ")

            if not input_str or not substring:
                print("Please provide both strings and a substring.")
                continue

            strings = [s.strip() for s in input_str.split(",")]
            num_to_display = int(
                input(
                    "Enter the number of results to display (1-{}): ".format(len(strings))
                )
            )

            if 1 <= num_to_display <= len(strings):
                break
            else:
                print("Please enter a number between 1 and {}".format(len(strings)))

        except ValueError:
            print("Invalid input. Please try again.")

    print("Do you want to filter? (yes/no): ")
    response = input().lower()

    while response != 'yes' and response != 'no':
        print("Invalid input. Please type 'yes' or 'no'.")
        response = input().lower()
        
    if response == 'no':
        print(strings[:num_to_display])
    else:
        result = [s for s in strings if bool(re.compile(substring).search(s))]
        print(result[:num_to_display])


filter_by_substring()