```Python
from typing import List


def filter_by_prefix():
    while True:
        try:
            strings = input("Enter a list of strings (space-separated): ")
            prefix = input("Enter a prefix: ")

            if not strings or not prefix:
                raise ValueError("Please enter valid inputs!")

            return [s.strip() for s in strings.split()] if strings else [], prefix
        except ValueError as e:
            print(f"Error: {e}")