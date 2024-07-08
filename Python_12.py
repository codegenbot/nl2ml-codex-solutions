```
from typing import Optional, list

def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = 0
    longest_str = None
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            longest_str = s
    return longest_str