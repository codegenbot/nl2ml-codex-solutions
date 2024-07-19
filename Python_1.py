from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char in "()":
            temp += char
            if temp.count('(') == temp.count(')'):
                result.append(temp)
                temp = ""
    return result

# Read input from user
paren_string = input("Enter a string with parentheses: ")
if set(paren_string) == {'(', ')'}:
    print(separate_paren_groups(paren_string))
else:
    print("Please enter a string with only parentheses.")