```
from typing import List
from collections import OrderedDict

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = OrderedDict()
    for num in numbers:
        if num not in seen:
            seen[num] = None
    return list(seen.keys())