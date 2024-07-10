Here is the solution to the problem:

```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        level = 0
        max_level = 0
        for c in s:
            if c == '(':
                level += 1
                max_level = max(max_level, level)
            elif c == ')':
                level -= 1
        result.append(max_level)
    return result