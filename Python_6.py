def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([(s.count("(") - s.count(")")) for s in group.split()])
        for group in paren_string.split()
    ]