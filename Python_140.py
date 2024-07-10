def fix_spaces(text):
    text = text.replace(" ", "_")
    return "".join(
        [
            (
                "_"
                if i < len(text) - 1 and text[i] == " " and text[i + 1] == " "
                else "_" if text[i] == " " else text[i]
            )
            for i in range(len(text))
        ]
    ).replace("_+", "- ")