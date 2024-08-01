from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = max(len(s) for s in strings)
    return next(s for s in strings if len(s) == max_length)

# Read input from the user
strings = input().split()

# Call the function with the input and print the result
print(longest(strings))