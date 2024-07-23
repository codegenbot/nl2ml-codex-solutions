from typing import List, Optional
import heapq

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max((s for s in strings), key=len)