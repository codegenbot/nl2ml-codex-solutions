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
            max_length = len(s)
            longest_str = s
    if longest_str == "":
        return None
    return longest_str

print(longest(["apple", "banana", "cherry"]))