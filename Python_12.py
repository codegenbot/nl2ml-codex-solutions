from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

input_strings = input().strip().split() # Change input().split() to input().strip().split()
result = longest(input_strings)
print(result)