from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    balance = 0
    current_group = []
    for char in paren_string:
        current_group.append(char)
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1
        if balance < 0:
            raise ValueError("Unbalanced input: too many closing parentheses")
        if balance == 0 and current_group:
            groups.append("".join(current_group))
            current_group = []
    if balance != 0:
        raise ValueError("Unbalanced input: too many opening parentheses")
    return groups

if __name__ == "__main__":
    paren_string = input().strip()
    try:
        result = separate_paren_groups(paren_string)
        print(result)
    except ValueError as e:
        print(f"Error: {e}")