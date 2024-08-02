from typing import List, Optional

def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), strings.index(x)))

strings = input().split()
result = longest(strings)
print(result)