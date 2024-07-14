def camel_case(s):
    result = ""
    for word in s.split():
        if not result:
            result += word.capitalize()
        else:
            result += word.capitalize().replace("-", "")
    return result