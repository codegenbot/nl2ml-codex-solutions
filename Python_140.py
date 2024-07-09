```
def fix_spaces(text):
    new_text = ''
    for char in text:
        if char == ' ' and (not new_text or new_text[-1] != ' '):
            new_text += '_'
        else:
            new_text += char
    return new_text.replace('  ', '-').replace('_ ', '_')