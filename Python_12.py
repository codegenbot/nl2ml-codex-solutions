```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    strings = [s for s in strings if isinstance(s, str) and len(str.strip()) > 0]
    longest_str = max(strings, key=len) if strings else None
    return longest_str if len(longest_str) > 0 else None

while True:
    try:
        num_strings = int(input("Enter the number of strings: "))
        if num_strings > 0:
            break
        print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter an integer.")

strings = [input("Please enter a string: ") for _ in range(num_strings)]
print(longest(strings)) if longest(strings) else print("No strings provided.")