```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ', '.join(map(str, strings))

print(concatenate(['hello', 'world']))