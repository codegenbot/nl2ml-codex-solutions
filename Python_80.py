```
def is_happy(s):
    s = s.lower()
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if set(chunk) == {'h', 'a'} or set(chunk) == {'p'}:
            return True
    return False