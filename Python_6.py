def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([paren_string.count('(' * i) for i in range(1, len(paren_string) // 2 + 1)]) - 1 for paren_string in paren_string.split()]