def fix_spaces(text):
    return re.sub(r'\s{3,}', '-', text.replace(' ', '_'))