def fix_spaces(text):
    new_text = ""
    for i in range(len(text)):
        if text[i] == " ":
            if len(new_text) > 0 and (
                new_text[-1] != " "
                or (i < len(text) - 2 and text[i + 1] == " " and text[i + 2] == " ")
            ):
                new_text += "-"
            else:
                new_text += "_"
        else:
            new_text += text[i]
    return new_text