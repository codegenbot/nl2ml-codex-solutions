def fix_spaces(text):
    text += ' '
    new_text = ''
    for i in range(len(text) - 1):
        if text[i] != ' ' or text[i+1] == ' ':
            new_text += text[i]
        elif len(new_text) > 0 and new_text[-1] != '_':
            new_text += '-'
        else:
            new_text += '_'
    return new_text.strip()