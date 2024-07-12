```Python
from typing import list

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    strings = input("Enter space separated strings: ").split()
    substring = input("Enter a substring to search: ")
    result = filter_by_substring(strings, substring)
    print(result)