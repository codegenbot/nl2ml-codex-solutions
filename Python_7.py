from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]


strings = input("Enter a list of strings separated by spaces: ").split()
substring = input("Enter a substring to filter by: ")
result = filter_by_substring(strings, substring)
print(result)