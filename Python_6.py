from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    return [paren.count("(") - 1 for paren in paren_string.split()]