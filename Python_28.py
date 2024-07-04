import sys
from typing import List

def concatenate(strings: List[str]) -> str:
    return ''.join(strings)

input_strings = []
try:
    while True:
        line = input()
        if line:
            input_strings.append(line)
except EOFError:
    pass

result = concatenate(input_strings)
print(result)