def check_if_last_char_is_a_letter(txt):
    return txt[-1].isalpha() and (not txt[-1].isalnum() or txt[-2] == ' ') if txt else False