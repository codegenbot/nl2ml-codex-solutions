from typing import List


def filter_by_prefix():
    try:
        strings = input("Enter strings (comma-separated): ").split(",")
        prefix = input("Enter prefix: ")

        if not strings:
            print("Invalid input. Please enter at least one string.")
        if not prefix:
            print("Invalid input. Please enter a non-empty prefix.")

        filtered_strings = [s.strip() for s in strings if s.strip().startswith(prefix)]

        print(filtered_strings)

    except ValueError:
        print("Invalid input. Please enter a comma-separated list of strings.")


filter_by_prefix()