Here is the completed code:

```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        nesting_level = 0
        max_nesting = 0
        for char in group:
            if char == '(':
                nesting_level += 1
            elif char == ')':
                nesting_level -= 1
            max_nesting = max(max_nesting, nesting_level)
        result.append(max_nesting)
    return result