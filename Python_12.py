from typing import List, Optional
import sys

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

input_strings = sys.argv[1:]
result = longest(input_strings)
print(result)