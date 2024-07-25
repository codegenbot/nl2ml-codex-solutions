def fix_spaces(text):
    new_text = ""
    prev_was_space = False
    for char in text:
        if char == " " and not prev_was_space:
            new_text += "_"
        else:
            new_text += char
        prev_was_space = char == " "
    return new_text