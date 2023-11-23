from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


strings = input("Enter a comma-separated list of strings: ").split(",")
substring = input("Enter the substring to filter by: ")
result = filter_by_substring(strings, substring)
print(result)