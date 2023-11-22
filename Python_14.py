from typing import List


def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string))]


# Read the input from the user
string = input("Enter a string: ")
print(all_prefixes(string))