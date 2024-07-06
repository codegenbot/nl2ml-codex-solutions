def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = 0
    result = strings[0]
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            result = s
    return result