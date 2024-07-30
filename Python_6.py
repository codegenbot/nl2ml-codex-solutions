from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return max([paren_string.count("(" * i) for i in range(1, len(paren_string) + 1)]) // 2

paren_string = input("Enter nested parentheses string: ")
print(parse_nested_parens(paren_string))