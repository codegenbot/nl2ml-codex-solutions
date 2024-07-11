def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    longest_str = strings[0]
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            longest_str = s
    return longest_str