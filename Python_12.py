from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(map(str.strip, filter(None, strings)), key=len)

strings = input("Please enter a list of strings separated by spaces:\n").split()
print(longest(strings))