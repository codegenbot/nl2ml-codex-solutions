```
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

strings = input("Enter strings separated by comma (','): ").split(',')
print(concatenate(strings))