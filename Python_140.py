```
def fix_spaces(text):
    new_text = ''
    for i in range(len(text)):
        if text[i] == ' ':
            if i < len(text) - 1 and text[i+1] == ' ':
                while i < len(text) - 1 and text[i+1] == ' ':
                    i += 1
                new_text += '-'
            else:
                new_text += '_'
        else:
            new_text += text[i]
    return new_text