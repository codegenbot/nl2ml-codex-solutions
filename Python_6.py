def parse_nested_parens(paren_string: str) -> list:
    if not paren_string:
        return []
    result = []
    current_group = ''
    max_level = 0
    for char in paren_string:
        if char == '(':
            current_group += '('
            max_level += 1
        elif char == ')':
            current_group += ')'
            max_level -= 1
            if max_level < 0:
                group_value = int(current_group[1:-1].replace('-', '')) 
                result.append(group_value) 
                temp = ''
                for i in range(1, len(current_group)-1):
                    if current_group[i] == '(':
                        break
                    temp += current_group[i]
                current_group = temp
        elif char.isdigit():
            current_group += char

    group_value = int(current_group.replace('(','-').replace(')', '').replace(',', '').split()[-1]) 
    result.append(group_value)

    return [int(x) for x in current_group.replace('(','-').replace(')', '').replace(',', '').split() if x.isdigit()]