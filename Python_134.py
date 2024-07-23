```
def check_if_last_char_is_a_letter(txt):
    if len(txt) == 0:
        return False
    last_char = txt[-1]
    if last_char.isalpha():
        if txt.rstrip().endswith(last_char):
            return False
        return True
    return False