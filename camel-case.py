```
def camel_case(s):
    words = s.replace("-", " ").split()
    result = ''
    for word in words:
        if not result:
            result = word.lower()
        else:
            result += word.capitalize()[0].upper() + word[1:].lower()
    return result