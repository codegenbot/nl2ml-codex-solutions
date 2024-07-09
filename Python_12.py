from typing import List, Optional

def longest(strings: list) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

print(longest(["string1", "thisislongerstring", "short"]))