import re

def separate_parentheses():
    paren_string = input("Enter the parentheses string: ")
    
    if re.match(r'^[\(\)]+$', paren_string) is None:
        raise ValueError("Invalid input: Please enter only parentheses")
    
    separated_groups = []
    current_group = ""
    open_count = 0
    
    for char in paren_string:
        if char == "(":
            open_count += 1
        elif char == ")":
            open_count -= 1
        
        current_group += char
        
        if open_count < 0:
            raise ValueError("Invalid input: Unbalanced parentheses")
        
        if open_count == 0:
            separated_groups.append(current_group)
            current_group = ""
    
    return separated_groups

try:
    print(separate_parentheses())
except ValueError as e:
    print(e)
except EOFError:
    print("Error: End of file reached unexpectedly")