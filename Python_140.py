```
def fix_spaces(text):
    result = ""
    i = 0
    while i < len(text):
        if text[i] == " ":
            if i + 1 < len(text) and text[i+1] == " ":
                if i + 2 >= len(text) or text[i+2] != " ":
                    result += "-"
                else:
                    i += 1
                    continue
            else:
                result += "_"
        else:
            result += text[i]
        i += 1
    return result