def check_if_last_char_is_a_letter(txt):
    return bool(txt and txt[-1].isalpha() and not txt.rstrip().endswith(txt))