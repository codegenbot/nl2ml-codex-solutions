```
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        result += string
    return result

strings = input("Enter a list of strings (space-separated): ")
strings = strings.split()
print(concatenate(strings))