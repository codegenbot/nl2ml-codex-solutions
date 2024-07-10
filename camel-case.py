def camel_case(s):
    words = s.replace("-", " ").split()
    return " ".join(word.capitalize() if i > 0 else word.lower().capitalize() for i, word in enumerate(words))