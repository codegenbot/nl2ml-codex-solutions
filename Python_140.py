```
def fix_spaces(text):
    new_text = ""
    i = 0
    while i < len(text):
        if text[i] == " ":
            if i + 1 < len(text) and text[i+1] == " ":
                if i + 2 >= len(text) or text[i+2] != " ":
                    new_text += "-"
                    i += 1
                else:
                    i += 2
            else:
                new_text += "_"
        else:
            new_text += text[i]
        i += 1
    return new_text