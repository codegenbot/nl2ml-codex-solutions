import re
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    balance = 0
    current_group = []
    paren_string = re.sub(r'[^()]+', '', paren_string)
    for char in paren_string:
        current_group.append(char)
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1
        if balance == 0 and current_group:
            groups.append("".join(current_group))
            current_group = []
    return groups

if __name__ == "__main__":
    paren_string = input().strip()
    result = separate_paren_groups(paren_string)
    print(result if paren_string else [])