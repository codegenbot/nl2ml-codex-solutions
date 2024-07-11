```
def separate_paren_groups(paren_string: str) -> list:
    def check():
        output = []
        current_group = ""
        for char in paren_string:
            if char == "(":
                if current_group:
                    output.append(current_group)
                    current_group = ""
                current_group += "("
            elif char == ")":
                current_group += ")"
            else:
                current_group += char
        if current_group:
            output.append(current_group)
        return output

    return check()