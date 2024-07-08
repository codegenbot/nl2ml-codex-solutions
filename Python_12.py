```
from typing import list, optional

def longest(strings: list[str]) -> optional[str]:
    if not strings:
        return None
    max_length = 0
    longest_str = ""
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            longest_str = s
    return longest_str