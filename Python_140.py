def fix_spaces(text):
    return text.strip().replace(" +", " ").replace(" ", "_").replace("--", "-")