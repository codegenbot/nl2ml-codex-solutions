from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

# Read input from user
strings = input().split()

# Call the function and print the result
print(longest(strings))