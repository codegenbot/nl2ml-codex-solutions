from typing import List, Optional

def longest(strings: list[str]) -> Optional[str]:
    if len(strings) == 0:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string