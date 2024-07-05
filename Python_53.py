def add(x: int, y: int):
    return x + y

import sys

try:
    input_line = sys.stdin.read().strip()
    if not input_line:
        raise ValueError
    x, y = map(int, input_line.split())
    print(add(x, y))
except (ValueError, EOFError):
    print("Invalid input")