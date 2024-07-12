from typing import List, Optional
import sys

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

result = longest(sys.argv[1:])
print(result)