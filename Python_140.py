```
def fix_spaces(text):
    result = ""
    for char in text:
        if char == " " and len(result) > 0 and result[-1] == " ":
            result += "-"
        elif char == " ":
            result += "_"
        else:
            result += char
    return result