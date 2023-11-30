from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    return paren_string.replace(" ", "").split(")(")