def fix_spaces(text):
    return (
        "".join(
            [
                "_" if c == " " and text[i - 1] != " " and (i == len(text) - 1 or text[i + 1] != " ") else c
                for i, c in enumerate(text)
            ]
        )
        + "_"
    )