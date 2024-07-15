from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([paren_string.count("(" * i) // 2 for i in range(1, len(paren_string) + 1)])
    ]


paren_string = input("Enter a string of nested parentheses: ")
print(parse_nested_parens(paren_string))