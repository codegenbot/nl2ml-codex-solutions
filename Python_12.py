```
from typing import List, Optional


def longest(strings: List[Optional[str]]) -> Optional[str]:
    max_len = 0
    result = None
    for s in strings:
        if s is not None and len(s) > max_len:
            max_len = len(s)
            result = s
    return result

strings = []
while True:
    user_input = input("Enter a string (or 'stop' to finish): ")
    if user_input.lower() == 'stop':
        break
    elif not isinstance(user_input, str) or len(user_input.strip()) == 0:
        print("Invalid input. Please enter a non-empty string.")
    else:
        strings.append(user_input)

print(longest(strings))