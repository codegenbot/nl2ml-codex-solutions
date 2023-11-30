import sys
from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)


input_string = input().rstrip()
result = longest(input_string.split(","))
print(result)