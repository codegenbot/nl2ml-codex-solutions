def camel_case(string):
    return (
        " ".join(word.capitalize() for word in string.split())
        if "-" in string
        else string.lower()
    )