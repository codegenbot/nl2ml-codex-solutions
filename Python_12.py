from typing import List, Optional

def longest(strings: List[str]) -> Optional[List[str]]:
    if not strings:
        return None
    for s in strings:
        if not isinstance(s, str):
            return "Program did not receive expected input"

    if len(strings) == 1:
        return [strings[0]]

    strings.sort(key=len)
    max_len = len(strings[-1])
    results = [strings[0]]

    for s in strings[1:]:
        if len(s) == max_len:
            results.append(s)
        elif len(s) > max_len:
            break

    return results