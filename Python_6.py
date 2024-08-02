from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([paren_string.count("(" * i) for i in range(1, 1000])]