```
def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] != ' ':
            new_text += text[i]
        elif i > 0 and text[i-1] == ' ':
            new_text += '-'
        else:
            new_text += '_'
    return new_text