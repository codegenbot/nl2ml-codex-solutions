def camel_case(s):
    return "".join(word.capitalize() for word in s.split("-") if word) + " ".join(
        word.capitalize() for word in input().split(" ") if word
    )