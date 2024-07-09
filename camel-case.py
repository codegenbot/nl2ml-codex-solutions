def camel_case(s):
    if len(s) == 1 or s.isupper():
        return s
    return (s[0].lower() + "".join(word.capitalize() for word in s.split("-")[1:]))