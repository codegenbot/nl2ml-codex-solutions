```
def fix_spaces(text):
    text = text.replace("  ", "_").replace(" ---", "-").replace(" --", "-").replace(" -", "-")
    return text.replace("_", "_")