from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = len(max(strings, key=len))
    return next(s for s in strings if len(s) == max_len)