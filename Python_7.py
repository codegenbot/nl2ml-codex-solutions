from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]

if __name__ == "__main__":
    strings = input().split()
    substring = input()
    result = filter_by_substring(strings, substring)
    print(result)