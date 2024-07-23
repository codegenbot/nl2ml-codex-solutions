```
from typing import List, Optional

def longest(strings: List[object]) -> Optional[str]:
    if not strings:
        return None
    return ''.join(map(str, sorted(set(map(str, strings)), key=len, reverse=True)))