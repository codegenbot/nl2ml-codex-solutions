def camel_case(s):
    if len(s) == 1:
        return s.lower()
    return s[0].upper() + "".join(word.capitalize() for word in s.split("-")[1:])