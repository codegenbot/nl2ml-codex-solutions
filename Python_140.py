def fix_spaces(text):
    text = text.replace(" ", "_")
    while "__" in text:
        text = text.replace("__", "_-")
    return text.replace("_-", "_").replace("_ ", "_").replace(" _", "_")