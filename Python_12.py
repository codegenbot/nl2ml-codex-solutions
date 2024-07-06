Here is the solution:

```python
from typing import Optional

def longest_file_line(input_file: str) -> Optional[str]:
    if not input_file:
        return None
    max_length = 0
    longest_line = None
    with open(input_file, "r") as f:
        for line in f:
            if len(line.strip()) > max_length:
                max_length = len(line.strip())
                longest_line = line.strip()
    return longest_line