```Python
from typing import List

def all_prefixes(string: str) -> List[str]:
    string = string.strip()
    
    return [string[:i] for i in range(1, len(string)+1)]