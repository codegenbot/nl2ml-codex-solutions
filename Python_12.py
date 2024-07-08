```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not all(isinstance(s, str) for s in strings):
        return None
    if not strings:
        return None
    max_length = 0
    longest_str = ""
    for s in strings:
        if len(s) > max_length:
            max_length = max_length
            longest_str = s
    return longest_str

print(longest(["apple", "banana", "cherry"]))