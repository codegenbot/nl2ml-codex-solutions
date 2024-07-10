def fix_spaces(text):
    new_text = ''
    count = 0
    in_word = False
    for char in text:
        if char == ' ':
            if not in_word:
                new_text += ' '
            else:
                if count <= 2:
                    new_text += '_'
                else:
                    new_text += '-'
                count = 0
            in_word = False
        elif char == '\n':
            if count <= 2:
                new_text += '\n_'
            else:
                new_text += '\n-'
            in_word = False
            count = 0
        elif char != ' ' and char != '\n':
            new_text += char
            in_word = True
            count += 1
    return new_text.strip()