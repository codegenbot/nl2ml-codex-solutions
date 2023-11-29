from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

input_str = input("Enter a space-separated list of strings: ")
strings = input_str.split()
result = longest(strings)
print(result)