```
def longest_strings(strings: List[str]) -> Optional[str]:
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
    return longest_str

print(longest_strings(["apple", "banana", "cherry"]))